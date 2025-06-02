#include<bits/stdc++.h>
using namespace std;
int main(){
       int n;
       cin>>n;
       vector<int>pfc(n+1,0);
       for(int i=2;i<=n;++i){
              if(pfc[i]==0){
                     for(int j=i;j<=n;j+=i){
                            pfc[j]++;
                     }
              }
       }
       int res=0;
       for(int i=1;i<=n;++i){
              if(pfc[i]==2){
                     res++;
                     
              }
       }
       cout<<res<<endl;
       return 0;
}