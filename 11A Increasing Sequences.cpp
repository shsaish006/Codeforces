#include<bits/stdc++.h>
using namespace std;
int main(){
    long a;
    cin>>a;
    vector<long>b(a);
    for(long c=0;c<a;c++){
        cin>>b[c];
    }
    sort(b.begin(),b.end());
    set<long>d;
    long e=b[a-1],f=0;
    for(long c=0;c<a;c++){
        if(e%b[c]==0&&d.count(b[c])==0){
            d.insert(b[c]);
        }else{
            f=b[c];
        }
    }
    cout<<e<<" "<< f<<endl;
    return 0;
}