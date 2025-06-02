#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while(t--){
        long a,b,c;
        cin>>a>>b>>c;
        long diff=abs(a-b);
        long mov=(diff+c*2-1)/(2*c);
        cout<<mov<<'\n';
    }
    return 0;
}
