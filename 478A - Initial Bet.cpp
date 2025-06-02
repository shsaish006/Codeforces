#include<bits/stdc++.h>
using namespace std;
int main(){
    long int a,b,c,d,e,f,g,h,i,j;
    while(cin>>f>>g>>h>>i>>j){
        c=f+g+h+i+j;
        if(c<5) cout<<"-1"<<endl;
        else if(c%5==0) cout<<c/5<<endl;
        else cout<<"-1"<<endl;
    }
    return 0;
    
}