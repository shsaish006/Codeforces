#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

void solve() 
{
    char arr[8][8];
    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == '.') continue;
            else cout << arr[i][j];
        }
    }
    cout << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int tc = 1;
    cin >> tc;
    while(tc--)
        solve();
    return 0;
}
