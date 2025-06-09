#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    string str;
    cin>>str;
    int upper = 0;
    int lower = 0;
    for(char i:str){
        if(isupper(i)) upper++;
        if(islower(i)) lower++;
    }
    if(lower<upper){
        for(char &i:str){
            i = toupper(i);
        }
    }
    else{
        for(char &i:str){
            i = tolower(i);
        }
    }
    cout<<str<<endl;
}