#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns of the matrix: ";
    cin >> r;
    cin>>c;
    int a[50][50], t[50][50];
    cout << "Enter elements of the matrix:"<<endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Enter element of row " << i << ", column " << j << ": ";
            cin >> a[i][j];
        }
    }
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            t[j][i]=a[i][j];
        }
    }
    cout<<"Transpose of the matrix:"<<endl;
    for (int i=0; i<c; i++) {
        for (int j=0;j<r;j++) {
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
