#include<bits/stdc++.h>
using namespace std;
double computeCost(const string& s){
    long long val=stoll(s);
    int digitSum=0;
    for(char c:s) digitSum+=(c-'0');
    if(digitSum==0) return numeric_limits<double>::infinity();
    return (double)val/digitSum;

}
int minRem(string n){
    int len=n.size();
    double minCost=numeric_limits<double>::infinity();
    int minRemoved=len-1;
    for(int mask=1;mask<(1<<len);++mask){
        string subseq="";
        for(int i=0;i<len;++i){
            if(mask&(1<<i)) subseq+=n[i];

        }
        if(stoll(subseq)==0) continue;
        double c=computeCost(subseq);
        int removed=len-subseq.length();
        if(c<minCost||(fabs(c-minCost)<1e-9&&removed<minRemoved)){
            minCost=c;
            minRemoved=removed;
        }
        

    }
    return minRemoved;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        cout<<minRem(n)<<endl;
    }
    return 0;

}

