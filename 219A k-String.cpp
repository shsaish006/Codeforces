#include <bits/stdc++.h>
#define int long long
using namespace std;
 
const int N = 1e5 + 5;
const int mod = 1e9 + 7;
 
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    int k; cin >> k;
    string s; cin >> s;
    int n = s.length();
    unordered_map<char,int>ump;
    for(int i = 0; i < n; i++){
        ump[s[i]] += 1;
    }
    for(auto x: ump){
        if(x.second % k != 0){
            cout << "-1" << '\n';
            return 0;
        }
    }
    string res = "";
    for(auto x: ump){
        res += string(x.second/k,x.first);
    }
   for(int i = 0; i < k; i++){
       cout << res;
   }
 
    
    return 0;
}