#include<bits/stdc++.h>
using namespace std;
vector<long long>lucky;
void sai(long long num=0){
    if(num>1e10) return;
    if(num>0) lucky.push_back(num);
    sai(num*10+4);
    sai(num*10+7);
}
int main(){
    long long l,r;
    cin>>l>>r;
    sai();
    sort(lucky.begin(),lucky.end());
    long long sum=0,pos=l;
    for(auto v:lucky){
        if(v<l) continue;
        long long left=pos;
        long long right=min(v,r);
        if(left<=right){
            sum+=(right-left+1)*v;
            pos=right+1;
        }
        if(pos>r) break;
    }
    cout<<sum<<endl;
    return 0;
}
