#include<bits/stdc++.h>
using namespace std;
bool  sai(int x){
    string s=to_string(x);
    return s.find('8')!=string::npos;
}
int main(){
    int a;
    cin>>a;
    int b=1;
    while(!sai(a+b)){
        b++;
    }
    cout<<b<<endl;
    return 0;
}