/*
Input:  1 2 3 4
        5 6 7 8
        9 10 11 12
        13 14 15 16

O/P :   13 9 5 1
        14 10 6 2
        15 11 7 3
        16 12 8 4
*/

#include <bits/stdc++.h> 
using namespace std;

const int R = 4, C = 4;

void rotate(int mat[4][4]) {
        
        for(int i=0 ; i<4 ; i++){
            for(int j=i ; j<4 ; j++)
                swap(mat[i][j], mat[j][i]);
        }
        for(int i=0 ; i<4 ; i++){
            for(int j=0 ; j<4/2 ; j++)
                swap(mat[i][j], mat[i][4-1-j]);
        }
}
int main() {	
	int arr[R][C] = {{1, 2, 3, 4},
    			{5, 6, 7, 8},
    			{9, 10, 11, 12},
    		        {13, 14, 15, 16}};
        
        rotate(arr);
        
        for(int i=0 ; i<4 ; i++){
            for(int j=0 ; j<4 ; j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
	return 0;
}