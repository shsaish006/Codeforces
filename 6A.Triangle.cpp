#include<bits/stdc++.h>
using namespace std;
int main(){
       vector<int>aa(4);
       for(int i=0;i<4;++i){
              cin>>aa[i];
       }
       bool ct=false;
       bool cs=false;
       for(int i=0;i<4;++i){
              for(int j=i+1;j<4;++j){
                     for(int k=j+1;k<4;++k){
                            vector<int> tri={aa[i],aa[j],aa[k]};
                            sort(tri.begin(),tri.end());
                            int a=tri[0],b=tri[1],c=tri[2];
                            if(a+b>c) ct=true;
                            else if(a+b==c) cs=true;
                            
                     }
              }
       }
       if(ct)cout<<"TRIANGLE"<<endl;
       else if(cs) cout<<"SEGMENT"<<endl;
       else cout<<"IMPOSSIBLE"<<endl;
       return 0;
}