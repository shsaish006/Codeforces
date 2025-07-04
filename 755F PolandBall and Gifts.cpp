#include <bits/stdc++.h>
using namespace std;
const int maxn=1e6+5;
int n,k,vis[maxn],a[maxn],b[maxn],c[maxn],d[maxn];
bool dp[maxn];
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)scanf("%d",&a[i]);
    int ans1=k,ans2=0,cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i])continue;
        int number=0,p=i;
        while(!vis[p])
        {
            vis[p]=1;
            number++;
            p=a[p];
        }
        b[++cnt]=number;
    }
    sort(b+1,b+cnt+1);
    int kk=k,num=0;
    for(int i=1;i<=cnt;++i)
    {
        if(b[i]/2<=kk)ans2+=b[i]/2*2,kk-=b[i]/2;
        else ans2+=2*kk,kk=0;
        if(b[i]&1)num++;
    }
    ans2+=min(kk,num);
    num=0;
    int number=0;
    for(int i=1;i<=cnt;++i)
    {
        if(b[i]==b[i-1])d[num]++;
        else d[++num]=1,a[num]=b[i];
    }
    cnt=0;
    for(int i=1;i<=num;++i)
    {
        for(int j=1;d[i];j<<=1)
        {
            int tep=min(d[i],j);
            c[++cnt]=a[i]*tep;
            d[i]-=tep;
        }
    }
    dp[0]=true;
    for(int i=1;i<=cnt;++i)
        for(int j=k-c[i];j>=0;--j)
            if(dp[j])dp[j+c[i]]=true;
    if(!dp[k])ans1++;
    printf("%d %d\n",ans1,ans2);
    return 0;
}