#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int>num(3);
        cin>>num[0]>>num[1]>>num[2];
        sort(num.begin(),num.end());
        if(num[1]%num[0]==0&&num[2]%num[0]==0){
            int j=num[1]/num[0]-1+num[2]/num[0]-1;
            if(j<=3) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}