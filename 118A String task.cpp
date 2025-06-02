#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0; i<s.length();)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='y'||
                s[i]=='Y')
        {
            s.erase(i,1);
        }
        else
        {
            i++;
        }
    }
    for(int i=0; i<s.length(); i++)
    {
        s[i]=tolower(s[i]);
    }
    for(int i=0; i<s.length(); i++)
    {
        cout<<"."<<s[i];
    }
 
 
}