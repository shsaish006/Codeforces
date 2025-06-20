#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0;i<n;++i){
            cin>>v[i];
        }
        int i=0;
        int j=n-1;
        bool ok=true;
        while(i<=j){
            long long sai=2*(n-(i+1))+1;
            if(v[i]>=sai&&v[j]>=sai){
                ++i;
                --j;

            }else{
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}