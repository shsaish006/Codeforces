#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x=0;
    cin>>n;
    //x=0;
    while(n--){
        string sai;
        cin>>sai;
        if(sai.find("++")!=string::npos){
            x++;
        }else{
            x--;
        }
    }
    cout<<x<<endl;
    return 0;
}