// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long long  a,b,c,coin,d[3005];
//     while(cin>>a){
//         for(b=0;b<a;b++){
//             cin>>d[b];


//         }
//         sort(d,d+a);
//         coin=0;
//         for(b=0;b<a;b++){
//         for(c=b+1;c<a;b++){

//             if(d[b]==d[c]){
//                 d[c]++;
//                 coin++;
//             }
//         }
//     }
//         cout<<coin<<endl;

//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,i,j,coin,a[3005];
    while(cin>>n){
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        coin=0;
        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){
                if(a[i]==a[j]){
                    a[j]++;
                    coin++;

                }
            }
        }
        cout<<coin<<endl;
    }
    return 0;
}
            