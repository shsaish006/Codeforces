#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c||a+c==b||b+c==a)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}

// t = int(input())
// for _ in range(t):
//     a, b, c = map(int, input().split())
//     if a + b == c or a + c == b or b + c == a:
//         print("YES")
//     else:
//         print("NO")
