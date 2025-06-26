#include <iostream>
#include <map>
#include <set>
#include <cstring>

using namespace std;

const long long N = 2e5 + 5;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n, ans = 0;
    cin >> n;

    bool prime[(2 * N)];
    memset(prime, true, sizeof(prime));
    prime[0] = prime[1] = false;

    for (long long p = 2; p * p <= (n * 2); p++) {
        if (prime[p]) {
            for (long long i = p * p; i <= (n * 2); i += p) {
                prime[i] = false;
            }
        }
    }

    map<long long, long long> mp;
    long long a[N];

    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }

    for (long long i = 0; i < n; i++) {
        if (mp[2] > 0 && prime[ans + 2]) {
            cout << 2 << " ";
            ans += 2;
            mp[2]--;
        }
        else if (mp[1] > 0 && prime[ans + 1]) {
            cout << 1 << " ";
            ans += 1;
            mp[1]--;
        }
        else if (mp[2] > 0) {
            cout << 2 << " ";
            ans += 2;
            mp[2]--;
        }
        else {
            cout << 1 << " ";
            ans += 1;
            mp[1]--;
        }
    }

    cout << "\n";
    return 0;
}
