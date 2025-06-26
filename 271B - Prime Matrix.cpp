#include<bits/stdc++.h>
using namespace std;
const int MAX=1000000;
bool isPrime[MAX];
int a[MAX];
void b(){
    for(int i=0;i<MAX;i++){
        isPrime[i]=true;
    }
    isPrime[0]=isPrime[1]=false;
    for(int i=2;i*i<MAX;i++){
        if(isPrime[i]){
            for(int j=i*i;j<MAX;j+=i){
                isPrime[j]=false;
            }
        }
    }
    int np=MAX-1;
    for(int i=MAX-1;i>=0;i--){
        if(isPrime[i]){
            np=i;
        }
        a[i]=np-i;
    }
}
int main(){
    int r,c;
    b();
    while(cin>>r>>c){
        int grid[505][505];
        for(int i=1;i<=r;i++){
            for(int j=1;j<=c;j++){
                int num;
                cin>>num;
                grid[i][j]=a[num];
            }
        }
        int minSum=numeric_limits<int>::max();
        for(int i=1;i<=r;i++){
            int rs=0;
            for(int j=1;j<=c;j++){
                rs+=grid[i][j];
            }
            if(rs<minSum){
                minSum=rs;
            }
        }
        for(int j=1;j<=c;j++){
            int cs=0;
            for(int i=1;i<=r;i++){
                cs+=grid[i][j];
            }
            if(cs<minSum){
                minSum=cs;
            }
        }
        cout<<minSum<<endl;
    }
    return 0;
}