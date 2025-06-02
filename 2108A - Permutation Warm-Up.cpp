#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=abs(n-(2*i-1));
    }
    cout<<(sum+2)/2<<endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}