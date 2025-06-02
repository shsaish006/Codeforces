#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;++i) cin>>a[i];
        bool alr_uns=false;
        for(int i=0;i<n-1;++i){
            if(a[i]>a[i+1]){
                alr_uns=true;
                break;
            }
        }
        if(alr_uns){
            cout<<0<<'\n';
            continue;
        }
        int min_diff=1e9;
        for(int i=0;i<n-1;++i)
        min_diff=min(min_diff,a[i+1]-a[i]);
        cout<<(min_diff/2+1)<<'\n';
}
return 0;

    }
