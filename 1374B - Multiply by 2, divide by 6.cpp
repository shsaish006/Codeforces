#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >>t;
    while(t--){
        long long n;
        cin>>n;
        int sai=0,shivam=0;
        while(n%2==0){
            n/=2;
            sai++;
        }while(n%3==0){
            n/=3;
            shivam++;
        }
        if(n!=1||sai>shivam) cout<<-1<<"\n";
        else cout<<2*shivam-sai<<"\n";
    }
    return 0;
}