// #include<bits/stdc++.h>
// #include<numeric>
// using namespace std;
// using ll=long long;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<ll>a(n),b(m);
//     for(ll &x:a) cin>>x;
//     for(ll &x:b) cin>>x;
//     ll g=0;
//     for(int i=1;i<n;++i){
//         g=gcd(g,abs(a[i]-a[0]));
//     }
//     for(int j=0;j<m;++j){
//         cout<<gcd(a[0]+b[j],g)<<" ";
//     }
//     cout<<'\n';
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

long long custom_gcd(long long a, long long b) {
    while(b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n), b(m);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    long long base_gcd = 0;
    for (int i = 1; i < n; ++i) {
        long long diff = abs(a[i] - a[0]);
        base_gcd = custom_gcd(base_gcd, diff);
    }

    for (int j = 0; j < m; ++j) {
        cout << custom_gcd(a[0] + b[j], base_gcd) << ' ';
    }
    cout << '\n';

    return 0;
}
