#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pp pair<ll, ll>
#define inf 1000000000000

int main() {
    string s, t;
    cin >> s >> t;

    map<char, char> mp;
    for (int i = 0; i < s.length(); i++)
        mp[s[i]] = t[i];

    string input;
    cin >> input;

    for (char c : input) {
        if (isdigit(c)) {
            cout << c;
        } 
        else if (islower(c)) {
            cout << mp[c];
        } 
        else if (isupper(c)) {
            char mapped = mp[tolower(c)];
            cout << (char)toupper(mapped);
        }
    }

    return 0;
}
