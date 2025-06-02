#include<bits/stdc++.h>
using namespace std;
 
#define int long long
 
void runTestCases() {
 
    int N;
    cin >> N;
    
    vector<int> A (N);
    
    for (auto &i : A)   
        cin >> i;
 
    vector<int> L (N + 1);
    vector<int> R (N + 1);
 
    auto print = [&](vector<int> &A) {
        
        for (auto &i : A) 
            cout << i << ' ';
            
        cout << '\n';   
        return;
    };
 
    int F = 1;
 
    for (int i = 1; i <= N; ++i) {
 
        cin >> L[i] >> R[i];
 
        L[i] = max(L[i], L[i - 1] + (A[i - 1] == 1));
        R[i] = min(R[i], R[i - 1] + (A[i - 1] != 0));
 
        F &= (L[i] <= R[i]);
    }
 
    if (F == 0) {
 
        cout << "-1\n";
        return;
    }
 
    auto x = L.back();
    vector<int> ans = A;
 
    for (int i = N - 1; i >= 0; --i) {
 
        if (ans[i] == -1) 
            ans[i] = min(1LL, x - L[i]);
 
        x -= ans[i];
    }
 
    print(ans);
    return;
}
 
signed main() {
 
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int T;
    cin >> T;
 
    while (T--) 
        runTestCases();
 
    return 0;
}