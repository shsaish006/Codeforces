#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    while(a--){
        cin>>b;
        int sai=1e9;
        for(int c=0;c<=b/4;c++){
            int rl=b-4*c;
            if(rl%2==0){
                int ch=rl/2;
                sai=min(sai,c+ch);
            }
        }
        cout<<sai<<'\n';
    }
    return 0;
}
