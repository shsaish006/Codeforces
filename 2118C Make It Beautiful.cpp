#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;

    while (testCases--) {
        int n;
        int64_t k;
        cin >> n >> k;

        vector<int64_t> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }

        vector<int> zeros;
        int count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 60; j++) {
                if ((nums[i] >> j) & 1) {
                    count++;
                } else {
                    zeros.push_back(j);
                }
            }
        }

        sort(zeros.begin(), zeros.end());

        for (int bit : zeros) {
            int64_t need = 1LL << bit;
            if (k >= need) {
                k -= need;
                count++;
            }
        }

        cout << count << '\n';
    }

    return 0;
}

