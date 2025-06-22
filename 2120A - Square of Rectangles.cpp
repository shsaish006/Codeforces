#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<string>out;
    for(int k=0;k<t;k++)
    {
    int l1,b1,l2,b2,l3,b3;
    cin>>l1>>b1>>l2>>b2>>l3>>b3;
    if(l1==l2 && l2==l3 && l1!=b1)
    {
        if(b1+b2+b3==l1)
        {
            out.push_back("yes");
        }
        else if(l1<b1 && b2+b3==b1 && l1+l2==b1)
        {
            out.push_back("yes");
        }
        else
        {
            out.push_back("no");
        }
    }
    else if(b2==b3 && b1==b2 && l1!=b1)
    {
        if(l1+l2+l3==b2)
        {
            out.push_back("yes");
        }
        else if(l1>b1 && l2+l3==l1 && b1+b2==l1)
        {
            out.push_back("yes");
        }
        else
        {
            out.push_back("no");
        }
    }

    else
    {
        if(l1!=b1)
        {
        if(b3+b2==b1 && l2==l3 && l1<b1 && l1+l2==b1)
        {
            out.push_back("yes");
        }
        else if(l2+l3==l1 && b2==b3 && l1>b1 && b2+b1==l1)
        {
            out.push_back("yes");
        }
        else
        {
            out.push_back("no");
        }
        }
        else
        {
            out.push_back("no");
        }
    }
    }
    for(auto x:out)
    {
        cout<<x<<endl;
    }
}

