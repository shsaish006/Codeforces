# include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int b[n+1];
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    if(n==1){
        cout<<b[1]<<endl;
        return 0;
    }
    int diff[n+1];
    unordered_map<int,long long>mp;
    for(int i=1;i<=n;i++){
        diff[i]=b[i]-i;
        mp[diff[i]]+=b[i];
    } 
    long long ans=0;
    for(auto it:mp){
        ans=max(ans,it.second);
    }
    cout<<ans<<endl;
    return 0;
}