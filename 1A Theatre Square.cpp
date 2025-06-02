#include<iostream>
using namespace std;
int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    long long t_l=(a+c-1)/c;
    long long t_w=(b+c-1)/c;
    cout<<t_l*t_w<<endl;
    return 0;
}