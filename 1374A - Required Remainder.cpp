#include<bits/stdc++.h>
using namespace std;
void solve(){
    long long x,y,n;
    cin>>x>>y>>n;
    long long q=(n-y)/x;
    long long k=q*x+y;
    cout<<k<<'\n';
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}