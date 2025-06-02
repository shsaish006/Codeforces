#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>switches(2*n);
        int cnt1=0;
        for(int i=0;i<2*n;++i){
            cin>>switches[i];
            cnt1+=switches[i];
        }
        int max_on=min({cnt1,2*n-cnt1,n});
        int min_on=cnt1%2;
        cout<< min_on << " " << max_on << '\n';

    }
    return 0;
}
