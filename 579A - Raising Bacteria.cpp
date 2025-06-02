// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int x;
//     cin>>x;
//     int count=0;
//     while(x>0){
//         if(x%2==1){
//             count++;
//             x/=2;
//         }
//         cout<<count<<endl;
//         return 0;
//     }
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,ans;
    while (cin>>n)
    {
        ans=0;
        while(n>1){
            if(n%2==0)
                n=n/2;
            else
            {
                n=n-1;ans++;
                }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}