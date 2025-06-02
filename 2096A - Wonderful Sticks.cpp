#include<bits/stdc++.h>
using namespace std;
 
void solve(string s, int n){
    vector<int> soln;
    int small=1, large=n;
    reverse(s.begin(),s.end());
    for(char i: s){
        if(i == '>'){
            soln.push_back(large); large--;
        } else if(i == '<'){
            soln.push_back(small); small++;
        }
    }
    soln.push_back(small);
    reverse(soln.begin(),soln.end());
    for(int i: soln) cout<<i<<" ";
    cout<<endl;
}
 
int main(){
    int tt; cin>>tt;
    while(tt--){
        int n; cin>>n;
        string s; cin>>s;
        solve(s,n);
    }
}