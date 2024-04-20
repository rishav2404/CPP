#include <bits/stdc++.h>
using namespace std;



int matrixsum( int rows,int columns, int **matrix){
    int i, j, sum=0;
    for (i=0; i<rows; i++)
        for (j=0; j<columns; j++)
            sum += matrix[i][j];
    return  sum;
}

int main() {
    int rows, columns;
    cin>>rows>>columns;
    int **matrix = new int*[rows];
    for (int i=0; i<rows; i++)
        matrix[i] = new int[columns];
    for (int i=0; i<rows; i++)
        for (int j=0; j<columns; j++)
            cin>>matrix[i][j];
    cout<<matrixsum(rows, columns, matrix);
    return 0;
}