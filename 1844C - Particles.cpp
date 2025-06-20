#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    long long ans=*max_element(v.begin(),v.end());
    for(int i=0;i<2;i++){
        long long sum=0;
        for(int j=i;j<n;j+=2){
            if(v[j]>0 ) sum+=v[j];
        }
        if(sum!=0) ans=max(ans,sum);
    }
    cout<<ans<<'\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}