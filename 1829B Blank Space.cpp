#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int maxi=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==0) count++;
            else{
                count=0;
            }
            maxi=max(count,maxi);
        }
        cout<<maxi<<endl;
    }
    return 0;
}