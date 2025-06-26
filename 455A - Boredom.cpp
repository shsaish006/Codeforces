#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100005];
    long long frequency[100005] = {0};
    long long dp[100005] = {0};
    int maximum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        frequency[a[i]]++;
        if (a[i] > maximum) {
            maximum = a[i];
        }
    }

    dp[1] = frequency[1];
    for (int i = 2; i <= maximum; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + frequency[i] * i);
    }

    cout << dp[maximum] << endl;

    return 0;
}
