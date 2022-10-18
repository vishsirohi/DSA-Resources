#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
#include<math.h>
using namespace std;
bool CanPlace(int grid[9][9],int x,int y,int n)
{
    //check row , column
    for(int i=0;i<9;++i){
        if((grid[x][i]==n)or(grid[i][y]==n))
          return false;
    }
    //check cell
    int cell_row=(x/3)*3,column_row=(y/3)*3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;++j){
            if(grid[x+cell_row][y+column_row]==n){
                return false;
            }
        }
    }
   return true;
}
bool SudokuSolver(int grid[9][9],int row,int column,int n )
{  
    if(row==n){
    //print grid
   
      return true;
    }
    if(column==n){
        //You ahve to return also
        return SudokuSolver(grid,row+1,0,n);
    }
    if(grid[row][column]!=0){
        return SudokuSolver(grid,row,column+1,n);
    }
    for(int num=1;num<=n;++num){
        if(CanPlace(grid,row,column,num)){
            grid[row][column]=num;
            if(SudokuSolver(grid,row,column+1,n)){
                return true;
            }
        }
    }
    //Backtracking concepts 
    grid[row][column]=0;
    return false;
   
}
int main(){
    int grid[9][9]={
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,0}
                };
    cout<<"\n Initial grid is \n";
    for(int i=0;i<9;++i){
        for(int j=0;j<9;++j){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
    if(SudokuSolver(grid,0,0,9))
        cout<<"\n Sudoku get solved ";
         cout<<"\n Solved sudoku is \n";
    for(int i=0;i<9;++i){
        for(int j=0;j<9;++j){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
      
    }
    return 0;
}
