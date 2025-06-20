#include<bits/stdc++.h>
using namespace std;
const int MOD=1000000007;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int &x:a){
        cin>>x;
        --x;
    }
    int o=0;
    auto f=[&](vector<int>a_c){
        for(int i=0;i<n;i++){
            while(a_c[i]!=i){
                o^=1;
                swap(a_c[i],a_c[a_c[i]]);
            }
        }
    };
    f(a);
    vector<vector<int>>p(2);
    for(int i=0;i<n;i++){
        p[i%2].push_back(a[i]);
    }
    for(auto &v:p){
        sort(v.begin(),v.end());
    }
    for(int j=0;j<=1;j++){
        for(int i=j;i<n;i+=2){
            a[i]=p[j][i/2];
        }
    }
    f(a);
    if(o){
        swap(a[n-1],a[n-3]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]+1<<(i+1==n?'\n':' ');
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}