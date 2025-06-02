#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        string b;
        cin >> n >> b;
        vector<bool> seen(26, false);
        for (char c : b) {
            seen[c - 'a'] = true;
        }
        vector<char> r;
        for (int i = 0; i < 26; ++i) {
            if (seen[i]) {
                r.push_back('a' + i);
            }
        }
        int sz = r.size();
        map<char, char> trans;
        for (int i = 0; i < sz; ++i) {
            trans[r[i]] = r[sz - 1 - i];
        }
        string res;
        for (char c : b) {
            res += trans[c];
        }
        cout << res << '\n';
    }
    return 0;
}