#include <bits/stdc++.h>

#define int long long
using namespace std;

void solve(){
    int n,k,cev=0; cin >> n >> k;
    int a[n+5];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a,a+n);
    cev+=min(mp[a[0]],k);
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            cev+=min(mp[a[i]],k);
        }
    }
    cout << cev << endl;
}
int32_t main()
{
    int t=1; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}