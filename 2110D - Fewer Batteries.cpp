#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
bool f(int n , vector<vector<pair<int , int>>> &adj , vector<int> &b , int md){
    vector<int> dp(n+1 , -1);
    dp[1] = min(b[1] , md);
    for(int i = 2 ; i<=n;i++){
        for(auto j:adj[i]){
            auto pr = j.first;
            auto w = j.second;
            if(dp[pr]>=w){
                dp[i] = max(dp[i] ,dp[pr] + min( b[i] , md-dp[pr]));
            }
        }
    }
    if(dp[n] == -1) {
        return false;
    }
    return true;
}
 
 
void solve(){
    int n , m ;
    cin>>n>>m;
    vector<vector<pair<int , int>>> adj(n+1);
    vector<int> b(n+1);
    for(int i = 1;i<=n;i++){
        cin>>b[i];
    } 
    for(int i = 0;i<m;i++){
        int a , b , c;
        cin>>a>>b>>c;
        adj[b] .push_back( {a , c});
    }
    if(f(n , adj , b , INT_MAX) == false) {
        cout<<-1<<endl;
        return;
    } 
    int l = 0 , r = INT_MAX , md;
    while(l<=r){
        md = l+(r-l)/2;
        if(f(n , adj , b , md)) r = md-1;
        else l = md+1;
    }
    cout<<l<<endl;
    return;
}
 
int main()
{
    ll t=1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}