#include<bits/stdc++.h>
using namespace std;
long long n,t;
int main()
{
cin>>n;
if(n%2!=0){n-=3;t++;}
t+=n/2;
cout<<t<<endl;
for(long long i=1;i<=n/2;i++)
{
    cout<<2<<" ";
}
if(n/2<t)cout<<3;
return 0;
}