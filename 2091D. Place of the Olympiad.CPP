// #include<bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int sai(ll n, ll m ,ll k){
//     ll left=1,right=m;
//     ll ans=m;
//     while(left<=right){
//         ll mid=(left+right)/2;
//         ll shivam=n*(m/mid);
//         if(shivam>=k){
//             ans=mid;
//             right=mid-1;
//         }else{
//             left=mid+1;
//         }
//     }
//     return ans;
// }
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin>>t;
//     while(t--){
//         ll n,m,k;
//         cin>>n>>m>>k;
//         cout<<sai(n,m,k)<<'\n';
//     }
//     return 0;
// }
#include <iostream>
using namespace std;

typedef long long ll;

bool check(ll b, ll n, ll m, ll k) {
    return k <= (((m / (b + 1)) * b) + (m % (b + 1))) * n;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        ll n, m, k;
        cin >> n >> m >> k;
        ll l = 1, r = min(m, k);
        while (l < r) {
            ll mid = (l + r) / 2;
            if (check(mid, n, m, k)) r = mid;
            else l = mid + 1;
        }
        cout << r << '\n';
    }
    return 0;
}
