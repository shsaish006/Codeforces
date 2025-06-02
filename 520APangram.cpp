#include<bits/stdc++.h>
using namespace std;
int main(){
       int n;
       cin>>n;
       string s;
       cin>>s;
       set<char>l;
       for(char c:s){
              l.insert(tolower(c));
       }
       if(l.size()==26){
              cout<<"YES\n";
       }else{
              cout<<"NO\n";
       }
       return 0;
}