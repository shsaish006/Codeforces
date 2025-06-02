#include<bits/stdc++.h>
using namespace std;
int n,m,k;
vector<string>maze;
vector<vector<bool>> visited;
int total_empty=0;
int to_leave;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
bool isValid(int x,int y){
       return x>=0&&x<n&&y>=0&&y<m&&maze[x][y]=='.'
       &&!visited[x][y];
       
}
void dfs(int x,int y,int &count){
       if(count>=to_leave) return;
       visited[x][y]=true;
       count++;
       for(int dir=0;dir<4;dir++){
              int nx=x+dx[dir];
              int ny=y+dy[dir];
              if(isValid(nx,ny)){
                     dfs(nx,ny,count);
              }
       }
}
int main(){
       cin>>n>>m>>k;
       maze.resize(n);
       visited.assign(n,vector<bool>(m,false));
       for(int i=0;i<n;++i){
              cin>>maze[i];
              for(int j=0;j<m;++j){
                     if(maze[i][j]=='.'){
                            total_empty++;
                     }
              }
       }
       to_leave=total_empty-k;
       bool started=false;
       for(int i=0;i<n&&!started;++i){
              for(int j=0;j<m&&!started;++j){
                     if(maze[i][j]=='.'){
                            int count=0;
                            dfs(i,j,count);
                            started=true;
                     }
              }
       }
       for(int i=0;i<n;++i){
              for(int j=0;j<m;++j){
                     if(maze[i][j]=='.'&&!visited[i][j]){
                            maze[i][j]='X';
                     }
              }
              cout<<maze[i]<<"\n";
       }
       return 0;
}