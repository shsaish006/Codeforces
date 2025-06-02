#include<bits/stdc++.h>
using namespace std;
bool isValid(const string& s){
    int atCount=count(s.begin(),s.end(),'@');
    if(atCount!=1) return false;
    if(s.front()=='.'||s.back()=='.'||s.front()=='@'||s.back()=='@') return false;
    return true;
}
int main(){
    string sai;
    cin>>sai;
    string best="";
    for(size_t i=0;i+1<sai.size();++i){
        if(sai.substr(i,2)=="at"){
            string temp=sai;
            temp.replace(i,2,"@");
            string parsed;
            for(size_t j=0;j<temp.size();){
                if(temp.substr(j,3)=="dot"){
                    parsed+=".";
                    j+=3;
                }else if(temp.substr(j,2)=="at"){
                    parsed+="at";
                    j+=2;
                }else{
                    parsed+=temp[j++];
                }
            }
            if(isValid(parsed)){
                if(best.empty()||parsed.length()<best.length()||(parsed.length()==best.length()&&parsed<best)){
           
                best=parsed;
            }
            }
        }
    }
    cout<<best<<endl;
    return 0;
}