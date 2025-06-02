#include <iostream>
using namespace std;
int check(int arr[], int n){
    int totalCount=0;
    for(int i=0; i<n; i++){
        if(arr[i]==2) totalCount++;
    }
    if(totalCount&1) return -1;
    int curr=0;
    for(int i=0; i<n; i++){
        if(arr[i]==2){
            curr++;
            totalCount--;
        }
        if(curr==totalCount) return i+1;
    }
    return -1;
}
int main(){
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        cout<<check(arr,n)<<endl;
    }
    return 0;
}