#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void printSolution(vector<vector<char> >&board,int &n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

}

bool isSafe(int &row, int col, vector<vector<char> >&board, int & n){
    //row
    int i=row;
    int j=col;

    while(j>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
    }

    i=row;
    j=col;
    //upper dia lhs
    while(j>=0 && i>=0){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
        i--;
    }

    i=row;
    j=col;
    //lower dia lhs
    while(j>=0 && i<n){
        if(board[i][j]=='Q'){
            return false;
        }
        j--;
        i++;
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
        if(isSafe(row,col,board, n)){
            board[row][col]='Q';
            solve(board, n, col+1,count);
            //backtrack
            board[row][col]='.';
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