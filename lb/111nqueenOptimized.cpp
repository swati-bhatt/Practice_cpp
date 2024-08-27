#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

unordered_map <int,bool> rowCheck;
unordered_map <int,bool> uDiaCheck;
unordered_map <int,bool> lDiaCheck;

void printSolution(vector<vector<char> >&board,int &n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

}

bool isSafe(int & row, int &col, vector<vector<char> >&board){
    if((rowCheck[row]==true) || (uDiaCheck[col-row]==true) || (lDiaCheck[col+row]==true)){
        return false;
    }
    return true;
}

void solve(vector<vector<char> >& board, int &n, int col, int & count){
    //base case
    if(col>=n){
        count+=1;
        cout<<count<<endl;
        printSolution(board,n);
        return;
    }

    for(int row=0; row<n; row++){
        if(isSafe(row,col,board)){
            board[row][col]='Q';
            rowCheck[row]=true;
            uDiaCheck[col-row]=true;
            lDiaCheck[col+row]=true;
            solve(board, n, col+1,count);
            //backtrack
            board[row][col]='.';
            rowCheck[row]=false;
            uDiaCheck[col-row]=false;
            lDiaCheck[col+row]=false;
        }
    }

}

int main(){
    int n;
    cout<<"enter value of n:";
    cin>>n;
    int count=0;
    vector <vector<char> > board(n,vector<char>(n,'.'));
    solve(board, n, 0,count );
    return 0;
}