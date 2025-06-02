#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>levels;
    int p;
    cin>>p;
    for(int i=0;i<p;++i){
        int level;
        cin>>level;
        levels.insert(level);
    }
    int q;
    cin>>q;
    for(int i=0;i<q;++i){
        int level;
        cin>>level;
        levels.insert(level);
    }
    if((int)levels.size()==n)
    cout<< "I become the guy."<<endl;
    else
    cout<< "Oh, my keyboard! "<<endl;
    return 0;

}