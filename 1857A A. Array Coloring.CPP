// #include<bits/stdc++.h> 
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         int t;
//         cin>>t;
//         vector<int>a(t);
//         int o_c=0,e_c=0;
//         for(int i=0;i<t;++i){
//             cin>>a[i];
//             if(a[i]%2==0) e_c++;
//             else o_c++;
//         }
//         if((o_c>0&&e_c>0)||(o_c>=2&&o_c%2==0)||
//     (e_c>=2)){
//         cout<<"YES"<<endl;
//     }else{
//         cout<<"NO"<<endl;
//     }
//     }
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// #define ll long long
// #define pb push_back
// #define ff first
// #define ss second
// #define mp make_pair
 

// string solve()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     int sum = 0;
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//         sum += a[i];
//     }
//     if(sum%2)
//     return "NO";
//     return "YES";
// }
// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
    
   
    
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         cout<<solve()<<endl;
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
       int t;
       cin>>t;
       while(t--){
              long long n;
              cin>>n;
              long long a[n];
              for(int i=0;i<n;i++)
                     cin>>a[i];
                     long long cntOdd=0;
                     for(int i=0;i<n;i++){
                            if(a[i]%2==1) cntOdd++;
                     }
                     if (cntOdd%2==1)
                     cout<< "NO" <<endl;
                     else 
                     cout << "YES" <<endl;
              
       }
       return 0;
}