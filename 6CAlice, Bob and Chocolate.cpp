#include<bits/stdc++.h>
using namespace std;
int main(){
       int n;
       cin>>n;
       vector<int>t(n);
       for(int i=0;i<n;++i){
              cin>>t[i];
       }
       int i=0,j=n-1;
       int ta=0,tb=0;
       while(i<=j){
              if(ta<=tb){
                     ta+=t[i];
                     i++;
              }else{
                     tb+=t[j];
                     j--;
              }
       }
       int ab=i;
       int bb=n-i;
       cout<<ab<<" "<<bb<<endl;
       return 0;
}