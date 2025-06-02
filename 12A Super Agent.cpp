#include<iostream>
using namespace std;
int main(){
    char grid[3][3];
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cin>>grid[i][j];
        }
    }
    bool symmetric=true;
    for(int i=0;i<3&&symmetric;++i){
        for(int j=0;j<3&&symmetric;++j){
            if(grid[i][j]!=grid[2-i][2-j]){
                symmetric=false;
            }
        }
    }
    cout<<(symmetric ? "YES":"NO") <<endl;
    return 0;
}