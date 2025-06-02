#include<bits/stdc++.h>
using namespace std;
bool isWinner(const vector<string>&board,char player){
       for(int i=0;i<3;++i){
              if(board[i][0]==player&&board[i][1]==player&&board[i][2]==player)
              return true;
              if(board[0][i]==player&&board[1][i]==player&&board[2][i]==player)
              return true;
              
       }
       if(board[0][0]==player&&board[1][1]==player&&board[2][2]==player)
              return true;
              if(board[0][2]==player&&board[1][1]==player&&board[2][0]==player)
              return true;
       return false;
}
int main(){
       vector<string>board(3);
       int xCount=0,oCount=0;
       for(int i=0;i<3;++i){
              cin>>board[i];
              for(char c:board[i]){
                     if(c=='X') xCount++;
                     else if (c=='0') oCount++;
              }
       }
       bool xWins=isWinner(board,'X');
        bool oWins=isWinner(board,'0');
        if(oCount>xCount||xCount>oCount+1){
               cout<<"illegal"<<endl;
        }else if(xWins&&oWins){
               cout<<"illegal"<<endl;
        }else if(xWins&&xCount!=oCount+1){
               cout<<"illegal"<<endl;
        }else if (oWins&&xCount!=oCount){
                cout<<"illegal"<<endl;
               
        }else if(xWins){
               cout<<"the first player won"<<endl;
        }else if(oWins){
               cout<<"the second player won"<<endl;
        }else if(xCount+oCount==9){
               cout<<"draw"<<endl;
        }else{
               cout<<(xCount==oCount?"first":"second")<<endl;
        }
        return 0;
       
}