#include <bits/stdc++.h>
using namespace std;
const int MOD=998244353;

int main() {
   int t;
   cin>>t;
   while(t--){
      int n;
      cin>>n;
      if(n%2==1){
        cout<<n<<" ";
        for(int i=1;i<n;i++)cout<<i<<" ";
        cout<<endl;
      }
      else{
        int f=0;
        int i;
        for( i=1;i<n;i++){
            if(n%i==i-1 && n%(i+1)==i){
                f=1;
            break;}
        }
        if(f){
            for(int j=1;j<i;j++)cout<<j<<" ";
            cout<<n<<" ";
            for(int j=i;j<n;j++)cout<<j<<" ";
            cout<<endl;
        }
        else cout<<-1<<endl;
      }
   }
}