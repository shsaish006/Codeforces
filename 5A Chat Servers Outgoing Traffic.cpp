#include<bits/stdc++.h>
using namespace std;
int main(){
       string line;
       set<string>chat;
       long long tt=0;
       while(getline(cin,line)){
              if(line.empty()) continue;
              if(line[0]=='+'){
                     chat.insert(line.substr(1));
                     
              }else if(line[0]=='-'){
                     chat.erase(line.substr(1));
              }else{
                     size_t aa=line.find(':');
                     if(aa !=string::npos){
                            string msg=line.substr(aa+1);
                            tt+=msg.length()*chat.size();
                     }
              }
              
       }
       cout<<tt<<endl;
       return 0;
}