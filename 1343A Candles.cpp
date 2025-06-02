#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        int k=2;
        int x;
        while(1){
            int val= (1<<k) -1;
            if(n % val == 0){
                x=n/val;
                break;
            }
            else k++;
        }
        cout<<x<<endl;
    }
    
 
    return 0;
}
