#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and columns of first matrix: ";
    cin >> r1 >> c1;
    cout << "Enter rows and columns of second matrix: ";
    cin >> r2 >> c2;
    
    
    if (c1 != r2) {
        cout << "Matrix multiplication not possible!" << endl;
        return 0;
    }
    
    int a[r1][c1], b[r2][c2];
    int c[r1][c2]={0};
    
    
    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cout << "Enter element of row " << i << ", column " << j << ": ";
            cin >> a[i][j];
        }
    }
    
    
    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cout << "Enter element of row " << i << ", column " << j << ": ";
            cin >> b[i][j];
        }
    }
    
    
    

    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) { // or k < r2
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    

    cout << "Resultant matrix:\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}