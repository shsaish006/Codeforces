#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
typedef long long h;
void solve(){
    int a,b;
    cin>>a>>b;
    vector<string>c(a);
    for(auto &d:c) cin>>d;
    h e=1;
    for(int f=0;f<b;++f){
        set<char>g;
        for(int h=0;h<a;++h){
            g.insert(c[h][f]);
        }
        int i=g.size();
        e=(e*i)%mod;

    }
    cout<<e<<'\n';
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int j=1;
    while(j--){
        solve();
    }
    return 0;
}