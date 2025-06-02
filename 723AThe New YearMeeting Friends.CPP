#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;
    int arr[3]={x1,x2,x3};
    sort(arr,arr+3);
    int t_dist=(arr[2]-arr[0]);
    cout<<t_dist<<endl;
    return 0;
}