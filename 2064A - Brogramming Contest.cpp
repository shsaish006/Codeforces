// // // // #include<bits/stdc++.h>
// // // // using namespace std;
// // // // int main(){
// // // //     int t;
// // // //     cin>>t;
// // // //     while(t--){
// // // //         int n;
// // // //         string s;
// // // //         cin>>n>>s;
// // // //         int l=0,r=n-1;
// // // //         while(l<n&&s[l]=='0') l++;
// // // //         while(r>=0&&s[r]=='1') r--;
// // // //         int moves=0;
// // // //         if(l<r){
// // // //             for(int i=l;i<=r;++i){
// // // //                 if(s[i]=='0'&&s[i]=='1')
// // // //                     moves++;
// // // //                 }
// // // //             }
// // // //             cout<<moves<<'\n';
        
// // // //     }
// // // //     return 0;
// // // // }
// // // #include <iostream>
// // // #include <string>
// // // #include <algorithm>
// // // using namespace std;

// // // int main() {
// // //     int T;
// // //     cin >> T;
// // //     while (T--) {
// // //         int n;
// // //         string s;
// // //         cin >> n >> s;

// // //         int min_moves = n; // maximum moves possible

// // //         // Precompute prefix sums of 1s and suffix sums of 0s
// // //         int prefix_1s[n + 1]; // prefix_1s[i] = number of '1's in s[0..i-1]
// // //         int suffix_0s[n + 1]; // suffix_0s[i] = number of '0's in s[i..n-1]

// // //         prefix_1s[0] = 0;
// // //         for (int i = 1; i <= n; ++i)
// // //             prefix_1s[i] = prefix_1s[i - 1] + (s[i - 1] == '1');

// // //         suffix_0s[n] = 0;
// // //         for (int i = n - 1; i >= 0; --i)
// // //             suffix_0s[i] = suffix_0s[i + 1] + (s[i] == '0');

// // //         // Try every split point i: s[0..i-1] stays, s[i..n-1] moves to t
// // //         for (int i = 0; i <= n; ++i) {
// // //             int moves = prefix_1s[i] + suffix_0s[i];
// // //             min_moves = min(min_moves, moves);
// // //         }

// // //         cout << min_moves << '\n';
// // //     }

// // //     return 0;
// // // }
// // #include <iostream>
// // #include <string>
// // #include <numeric>
// // #include <algorithm>

// // void solve() {
// //     int n;
// //     std::cin >> n;
// //     std::string s;
// //     std::cin >> s;

// //     int ones_in_s = 0;
// //     for (char c : s) {
// //         if (c == '1') {
// //             ones_in_s++;
// //         }
// //     }

// //     if (ones_in_s == 0) {
// //         std::cout << 0 << std::endl;
// //         return;
// //     }
        
// //     if (ones_in_s == n) {
// //         std::cout << 1 << std::endl;
// //         return;
// //     }

// //     int out_of_place_ones_s = 0;
// //     for (int i = 0; i < n; ++i) {
// //         if (s[i] == '1') {
// //             bool found_zero_after = false;
// //             for (int j = i + 1; j < n; ++j) {
// //                 if (s[j] == '0') {
// //                     found_zero_after = true;
// //                     break;
// //                 }
// //             }
// //             if (found_zero_after) {
// //                 out_of_place_ones_s++;
// //             }
// //         }
// //     }
    
// //     if (out_of_place_ones_s == 0) {
// //         std::cout << 0 << std::endl;
// //         return;
// //     }

// //     std::cout << 2 << std::endl;
// // }

// // int main() {
// //     std::ios_base::sync_with_stdio(false);
// //     std::cin.tie(NULL);
// //     int t;
// //     std::cin >> t;
// //     while (t--) {
// //         solve();
// //     }
// //     return 0;
// // }
// #include <iostream>
// #include <string>
// #include <numeric>
// #include <algorithm>

// void solve() {
//     int n;
//     std::cin >> n;
//     std::string s;
//     std::cin >> s;

//     int ones_in_s = 0;
//     for (char c : s) {
//         if (c == '1') {
//             ones_in_s++;
//         }
//     }

//     if (ones_in_s == 0) {
//         std::cout << 0 << std::endl;
//         return;
//     }
        
//     if (ones_in_s == n) {
//         std::cout << 1 << std::endl;
//         return;
//     }

//     int out_of_place_ones_s = 0;
//     for (int i = 0; i < n; ++i) {
//         if (s[i] == '1') {
//             bool found_zero_after = false;
//             for (int j = i + 1; j < n; ++j) {
//                 if (s[j] == '0') {
//                     found_zero_after = true;
//                     break;
//                 }
//             }
//             if (found_zero_after) {
//                 out_of_place_ones_s++;
//             }
//         }
//     }
    
//     if (out_of_place_ones_s == 0) {
//         std::cout << 0 << std::endl;
//         return;
//     }

//     std::cout << 2 << std::endl;
// }

// int main() {
//     std::ios_base::sync_with_stdio(false);
//     std::cin.tie(NULL);
//     int t;
//     std::cin >> t;
//     while (t--) {
//         solve();
//     }
//     return 0;
// }
#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int k = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (s[i] != s[i + 1]) {
                k++;
            }
        }

        if (s[0] == '1')
            cout << (k + 1) << endl;
        else
            cout << k << endl;
    }
    return 0;
}
