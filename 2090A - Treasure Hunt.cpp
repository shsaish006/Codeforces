//WRONG ANSWER APPROACH
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long x,y,a;
//         cin>>x>>y>>a;
//         long long depth=2*a+1;
//         long long tdpr=x+y;
//         long long rounds=depth/tdpr;
//         long long totaldug=rounds*tdpr;
//         if(totaldug>=depth){
//             cout<< "YES" << endl;
//         }else if(totaldug+x>=depth){
//             cout << "NO" << endl;
//         }else{
//             cout << "YES" << endl;
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
#define int long long
using namespace std;
bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
void solve(){
    int x,y,a;
    cin>>x>>y>>a;
    int sum=x+y;
    int rem=(2*a+1)%(2*sum);
    if(2*x>2*a+1){
        cout<<"NO"<<endl;
    }else if(2*sum>=2*a+1){
        cout<<"YES"<<endl;
    }else if(rem==0){
        cout<<"NO"<<endl;
    }else if (rem<=2*x){
        cout<<"NO"<<endl;
}else{
        cout<<"YES"<<endl;
    }
}
signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}