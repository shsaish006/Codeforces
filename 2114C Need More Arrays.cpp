#include<bits/stdc++.h>

void solve() {
    int n;
    std::cin >> n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> a[i];
    }

    if (n == 0) { 
        std::cout << 0 << "\n";
        return;
    }

    int num_arrays = 0;
    int last_val_in_current_array = -2; 

    for (int i = 0; i < n; ++i) {
        if (a[i] > last_val_in_current_array + 1) {
            num_arrays++;
            last_val_in_current_array = a[i];
        } 
       
    }

    std::cout << num_arrays << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}