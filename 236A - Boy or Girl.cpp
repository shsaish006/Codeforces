#include<bits/stdc++.h>
using namespace std;
int main(){
       string a;
       cin>>a;
       set<char>distinctChars;
       for(char ch:a){
              distinctChars.insert(ch);
       }
       if(distinctChars.size()%2==0){
              cout<<"CHAT WITH HER!"<<endl;
       }else{
              cout<<"IGNORE HIM!"<<endl;
       }
}
