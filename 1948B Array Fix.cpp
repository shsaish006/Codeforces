#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n;
        cin>>n;
        long prev=-1;
        bool res=true;
        for(long p=0;p<n;p++){
            long x;
            cin>>x;
            int d=x/10;
            int m=x%10;
            if(prev<=d&&d<=m){
                prev=m;
            }else if(prev<=x){
                prev=x;
            }else{
                res=false;
            }
        }
        cout<<(res?"YES":"NO")<<endl;
    }
    return 0;
}