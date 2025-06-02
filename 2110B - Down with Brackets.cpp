#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        bool flag=false;
        int count=0;
        for(int i=0; i<n; i++){
            if(s[i]=='(')
            {
                count++;
            }
            else{
                count--;
            }
            if(count==0 and i!=n-1)
            {
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}

