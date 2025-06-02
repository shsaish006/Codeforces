#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,a,b,c;
    cin>>s;
    for(int i=0;i<s;i++){
        cin>>a>>b>>c;
        if(a!=b&&a!=c&&b==c) cout<<a<<endl;
        if(a!=b&&a==c&&b!=c) cout<<b<<endl;
        if(a==b&&a!=c&&b!=c) cout<<c<<endl;

    }
    return 0;
}
