#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    if(n.size()==1){
        cout<<0<<'\n';
        return 0;
    }
    int count=0;
    while(n.size()>1){
        long long sum=0;
        for(char c:n)sum+=c-'0';
        n=to_string(sum);
        count++;
    }
    cout<<count<<'\n';
    return 0;
}