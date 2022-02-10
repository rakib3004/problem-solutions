#include<bits/stdc++.h>
using namespace std;

int C[][5] = {{3, 2, 5, 4, 8},
             {5, 7, 5, 6, 1},
             {4, 4, 6, 2, 3},
             {2, 8, 9, 5, 8}
             };
int rows = sizeof C/sizeof C[0];
int cols = sizeof C[0] / sizeof C[0][0];

void printBest(int *A[], int i, int j){
    if(i==0 || j==0 || j==cols+1) return;

    if(A[i-1][j-1] <= A[i-1][j] && A[i-1][j-1] <= A[i-1][j+1]) printBest(A, i-1, j-1);
    else if(A[i-1][j] <= A[i-1][j-1] && A[i-1][j] <= A[i-1][j+1]) printBest(A, i-1, j);
    else if(A[i-1][j+1] <= A[i-1][j-1] && A[i-1][j+1] <= A[i-1][j]) printBest(A, i-1, j+1);

    cout << "[" << i << "," << j << "]" << endl;
}

int main(){

    int i, j;

    cout << "The input matrix is:" << endl;

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatrix after cumulating the danger values: \n";

    int** A;

    for(i=0; i<rows+1; i++){
        for(j=0; j<cols+2; j++){
            A[i][j] = 0;
        }
    }

    for(i=0; i<rows+1; i++){
        A[i][0] = 100;
        A[i][cols+1] = 100;
    }

    for(i=0; i<rows; i++){
        for(j=0; j<cols; j++){
            A[i+1][j+1] = C[i][j] + min(min(A[i][j], A[i][j+1]), A[i][j+2]);
        }
    }

    int k = i;
    int l = j;

    for(i=0; i<rows+1; i++){
        for(j=0; j<cols+2; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nThe optimal indices are: " << endl;

    printBest(A, k, l);

    return 0;
}

