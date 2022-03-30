#include <iostream>
using namespace std;

int** transpose(int** matrix, int nRows, int nCols){
    int** transposedMatrix = new int* [nCols];
    for (int i = 0; i < nCols; i++)
        *(transposedMatrix+i) =  new int [nRows];
    for (int i = 0; i < nCols; i++)
        for (int j = 0; j < nRows; j++)
            *(*(transposedMatrix+i)+j) = *(*(matrix+j)+i);
    return transposedMatrix;
}

int** inputMatrix(int nRows, int nCols){
    int** matrix = new int* [nRows];
    for (int i = 0; i < nRows; i++)
        *(matrix+i) = new int [nCols];
    for (int i = 0; i < nRows; i++)
        for (int j = 0 ; j < nCols; j++)
            cin >> *(*(matrix+i)+j);
    return matrix;
}

void printMatrix(int** matrix, int nRows, int nCols){
     for (int i = 0; i < nRows; i++){
        for (int j = 0 ; j < nCols; j++)
            cout << *(*(matrix+i)+j) << " ";
        cout << endl;
     }
}

int main(){
    int n, m;
    cin >> n >> m;
    int** matrix = inputMatrix(n, m);
    matrix = transpose(matrix, n, m);
    printMatrix(matrix, m, n);
    return 0;
}