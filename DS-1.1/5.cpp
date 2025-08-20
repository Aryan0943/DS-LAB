#include <iostream>
using namespace std;
int main() {
    int r,c;
    cout << "Enter number of rows and columns: ";
    cin>>r;
    cin>>c;
    int a[r][c];    
    cout<<"Enter elements of the matrix:\n";
    for (int i=0; i<r;i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    for (int i=0; i<r;i++) {
        int rowSum=0;
        for (int j=0;j<c;j++) {
            rowSum += a[i][j];
        }
        cout<<"Sum of Row "<<i<<" : "<<rowSum<<endl;
    }
    for (int j=0;j<c;j++) {
        int colSum=0;
        for (int i=0;i<r;i++) {
            colSum+=a[i][j];
        }
        cout<<"Sum of Column "<<j<<" : "<< colSum<<endl;
    }
    return 0;
}