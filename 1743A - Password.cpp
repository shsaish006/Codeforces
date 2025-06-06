#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>ban;
        for(int i=0;i<n;++i){
            int x;
            cin>>x;
            ban.insert(x);
        }
        vector<int>al;
        for(int d=0;d<=9;++d){
            if(ban.find(d)==ban.end()){
                al.push_back(d);
            }
        }
        int ans=0;
        for(int i=0;i<al.size();++i){
            for(int j=i+1;j<al.size();++j){
                ans+=6;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}