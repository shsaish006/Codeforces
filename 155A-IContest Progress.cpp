#include<bits/stdc++.h>
using namespace std;
int main(){
       int n;
       cin>>n;
       vector<int>scores(n);
       for(int i=0;i<n;++i){
              cin>>scores[i];
       }
       int amazing_count=0;
       int best=scores[0],worst=scores[0];
       for(int i=1;i<n;++i){
              if(scores[i]>best){
                     best=scores[i];
                     amazing_count++;
              }else if(scores[i]<worst){
                     worst=scores[i];
                     amazing_count++;
              }
       }
       cout<<amazing_count<<endl;
       return 0;
}