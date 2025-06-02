#include<bits/stdc++.h>
using namespace std;
int main(){
       int t;
       cin>>t;
       while(t--){
              int n;
              cin>>n;
              string s;
              cin>>s;
              set<char>seen;
              int b=0;
              for(char c:s){
                     if(seen.count(c)){
                     b+=1;
             
                     }else{
                            b+=2;
                            seen.insert(c);
                     }
              }
              cout<<b<< '\n';
       }
       return 0;
       
}