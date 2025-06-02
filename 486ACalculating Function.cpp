//f(n) =  - 1 + 2 - 3 + .. + ( - 1)^n .n
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n%2==0){
        cout << n/2 << endl;
    }else{
        cout << -((n+1)/2) <<endl;
    }
    return 0;
}

//f(n)=1−2+3−4+5−6+…+(−1) ^n+1.n

#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n%2==0){
        cout << -n/2 << endl;
    }else{
        cout << ((n+1)/2) <<endl;
    }
    return 0;
}

