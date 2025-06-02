#include<iostream>
using namespace std;
int main(){
       int n;
       cin>>n;
       string target="codeforces";
       while(n--){
              string s;
              cin>>s;
              int diff=0;
              for(int i=0;i<10;++i){
                     if(s[i]!=target[i]){
                            diff++;
                     }
              }
              cout<<diff<<endl;
              
       }
       return 0;
}