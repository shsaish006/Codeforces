#include<bits/stdc++.h>
using namespace std;
 
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=n-1;i>0;i--){
    for(int j=i-1;j>=0;j--){
        if(a[i]<a[j]){
            swap(a[i],a[j]);
        }
    }
}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
}