#include <bits/stdc++.h>
using namespace std;
 
#define ll long long int
#define nline '\n'
 
void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
 
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
 
    ll ans = arr[0];
 
    for (int i = 1; i < n; i++)
        ans = (ans & arr[i]);
 
    cout << ans << nline;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }
 
}