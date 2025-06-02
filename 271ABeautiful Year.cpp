#include<iostream>
#include<set>
using namespace std;
bool hdd(int year){
       set<char>digits;
       string s=to_string(year);
       for(char c:s){
              if(digits.count(c)){
                     return false;
              }
              digits.insert(c);
       }
       return true;
}
int main(){
       int y;
       cin>>y;
       ++y;
       while(!hdd(y)){
              ++y;
       }
       cout<<y<<endl;
       return 0;
}