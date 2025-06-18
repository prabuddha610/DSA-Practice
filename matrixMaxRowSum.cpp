#include <iostream>
using namespace std;

int getMaxSum(int mat[][3], int rows, int cols){
    int maxRowSum = INT32_MIN;

    for(int i=0; i< rows; i++){
        int rowSumI = 0;
        for(int j=0; j<cols; j++){
            rowSumI += mat[i][j];
        }
        maxRowSum = max(maxRowSum, rowSumI);
    }
    return maxRowSum;
}

int main(){
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3;
    int cols = 3;

    cout << getMaxSum(matrix, rows, cols) << endl;
    return 0;
}