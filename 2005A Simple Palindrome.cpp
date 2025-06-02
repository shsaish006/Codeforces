#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main()
{
    ios
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif
    string vowels = "aeiou";
    ll t;
    cin >> t;
    while (t--) {
        ll n, vowelSeq, rem;
        string res = "";
        cin >> n;
        vowelSeq = n / 5;
        rem = n % 5;
        while (vowelSeq--) {
            res += vowels;
        }
        for (ll i = 0 ; i < rem ; i++) {
            res += vowels[i];
        }
        sort(res.begin(), res.end());
        cout << res << endl;
    }
    return 0;
}
