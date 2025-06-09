#include <bits/stdc++.h>
using namespace std;
int a[200000],b[200000],ra[200000],rb[200000],ra2[200000],rb2[200000];
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	int T,n,i,ans;
	for(cin>>T;T>0;T--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			a[i]--;
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
			b[i]--;
		}
		for(i=1;i<n;i+=2)swap(a[i],b[i]);
		for(i=0;i<n;i++)
		{
			ra[i]=-1;
			rb[i]=-1;
			ra2[i]=-1;
			rb2[i]=-1;
		}
		for(i=n-1;i>-1;i--)
		{
			if(ra[a[i]]==-1)ra[a[i]]=i;
			else if(ra2[a[i]]==-1&&i!=ra[a[i]]-1)ra2[a[i]]=i;
			if(rb[b[i]]==-1)rb[b[i]]=i;
			else if(rb2[b[i]]==-1&&i!=rb[b[i]]-1)rb2[b[i]]=i;
		}
		ans=0;
		for(i=0;i<n;i++)
		{
			if(ra[i]!=-1&&rb[i]!=-1)ans=max(ans,min(ra[i],rb[i])+1);
			if(ra[i]!=-1&&ra2[i]!=-1)ans=max(ans,ra2[i]+1);
			if(rb[i]!=-1&&rb2[i]!=-1)ans=max(ans,rb2[i]+1);
		}
		cout<<ans<<'\n';
	}
	return 0;
}