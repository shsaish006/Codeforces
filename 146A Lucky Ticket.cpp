#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string ticket;
    cin>>ticket;
    int half=n/2;
    int s1=0,s2=0;
    for(char c:ticket){
        if(c!='4'&&c!='7'){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    for(int i=0;i<half;++i){
        s1+=ticket[i]-'0';
        s2+=ticket[i+half]-'0';
    }
    if(s1==s2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}