#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int i, int j, int &row, int &col, vector<vector<bool> > & visited, vector<vector<int> >&arr){
    if((i>=0 && i<row) && (j>=0 && j<col) && (arr[i][j]==1) && (visited[i][j]==false)){
            return true;
    }
    else{
        return false;
    }
}
void solveMaze( vector <vector<int> > &maze, vector<vector<bool> >visited, int row, int col, int i, int j, vector<string>& path, string output){

    //base condition
    if((i==(row-1))&&(j==(col-1))){
        path.push_back(output);
        return;
    }

    //Down
    if(isSafe(i+1,j,row,col,visited, maze)){
        visited[i+1][j]=true;
        solveMaze(maze, visited, row, col, i+1,j,path, output+'D');
        visited[i+1][j]=false;

    }
    //Up
    if(isSafe(i-1,j,row,col,visited, maze)){
        visited[i-1][j]=true;
        solveMaze(maze, visited, row, col, i-1,j,path, output+'U');
        visited[i-1][j]=false;

    }
    //Left
    if(isSafe(i,j-1,row,col,visited, maze)){
        visited[i][j-1]=true;
        solveMaze(maze, visited, row, col, i,j-1,path, output+'L');
        visited[i][j-1]=false;

    }
    //Right
    if(isSafe(i,j+1,row,col,visited, maze)){
        visited[i][j+1]=true;
        solveMaze(maze, visited, row, col, i,j+1,path, output+'R');
        visited[i][j+1]=false;

    }
}

int main(){
  vector <vector<int> > maze = {
    {1,0,0},
    {1,1,0},
    {1,1,1}
  };

  if(maze[0][0]==0){
    cout<<"No path Exists"<<endl;
  }
  else{
    int row=maze.size();
    int col=maze[0].size();
    vector <string> path;
    string output="";
    vector<vector<bool> > visited (row , vector<bool>(col,false));
    visited[0][0]=true;
    solveMaze(maze, visited, row, col, 0,0, path,output);

    if(path.size()==0){
        cout<<"No path Exists"<<endl;
    }

    for(int i=0; i<path.size(); i++){
        cout<<path[i]<<endl;
    }
  }

  return 0;
}