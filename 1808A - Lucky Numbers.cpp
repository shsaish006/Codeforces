// #include<bits/stdc++.h>
// using namespace std;
// int gl(int num){
//     int maxD=0,minD=9;
//     while(num>0){
//         int digit=num%10;
//         maxD=max(maxD,digit);
//         minD=min(minD,digit);
//         num/=10;
//     }
//     return maxD-minD;
// }
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int l,r;
//         cin>>l>>r;
//         int bestNum=1;
//         int maxLuck=gl(l);
//         for(int i=l;i<=min(r,l+100);++i){
//             int currentLuck=gl(i);
//             if(currentLuck>maxLuck){
//                 maxLuck=currentLuck;
//                 bestNum=i;
//             }
//             if(maxLuck==9) break;
//         }
//         cout<<bestNum<<endl;
//     }
//     return 0;
// }

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        int maxLuckiness = -1;
        int bestNumber = l;

        for (int i = r; i >= l; i--) {
            string numStr = to_string(i);
            sort(numStr.begin(), numStr.end());
            int diff = numStr.back() - numStr.front(); // max digit - min digit

            if (diff > maxLuckiness) {
                maxLuckiness = diff;
                bestNumber = i;
            }

           
            if (maxLuckiness == 9)
                break;
        }

        cout << bestNumber << endl;
    }

    return 0;
}
