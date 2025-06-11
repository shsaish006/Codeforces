#include<bits/stdc++.h>
 using namespace std;
 
 void solve(){
 long long int n,k,sum=0;
 cin>>n>>k;
 long long int arr[n];
 for(long long int i=0;i<n;i++){
      cin>>arr[i];
      sum+=arr[i];
 }
sort(arr,arr+n);
if(arr[n-1]-arr[0]>k+1){
    cout<<"Jerry"<<endl;
    return;
}else if((arr[n-1]-arr[0]==k+1)&&(arr[n-2]==arr[n-1])){
 
    cout<<"Jerry"<<endl;
    return;
}
if(sum%2==0){
    cout<<"Jerry"<<endl;
    return;
}else{
    cout<<"Tom"<<endl;
    return;
}
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}