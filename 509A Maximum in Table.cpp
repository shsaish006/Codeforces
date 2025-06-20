#include <bits/stdc++.h>
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define sz size()

using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n + 1][n + 1];

    for (int i = 1; i <= n; i++) {
        a[1][i] = 1;
        a[i][1] = 1;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 2; j <= n; j++) {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }

    cout << a[n][n] << endl;
    return 0;
}
