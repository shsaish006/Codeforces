// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a,b,c;
//     cin>>a>>b>>c;
//     int res=max({a+b+c,a+(b*c),a*b*c,a*(b+c)});
//     cout<<res<<endl;
//     return 0;

// }

#include <iostream>  // for input/output
#include <algorithm> // for max()

using namespace std;

int main() {
    int a, b, c;
    
   
    cin >> a >> b >> c;
    int ans = a + b + c;

   
    ans = max(ans, a * b * c);
    ans = max(ans, (a + b) * c);
    ans = max(ans, a * (b + c));
    ans = max(ans, a + (b * c));
    ans = max(ans, (a * b) + c);

   
    cout << ans << endl;

    return 0;
}
