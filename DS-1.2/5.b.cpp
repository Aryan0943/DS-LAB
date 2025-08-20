#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size of tri-diagonal matrix: ";
    cin >> n;
    int tri[3*n - 2]; 
    cout << "Enter elements row by row:"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int x; cin >> x;
            if (i-j == 0) tri[n-1+i] = x; 
            else if (i-j == 1) tri[i-1] = x; 
            else if (i-j == -1) tri[2*n-1+i] = x; 
        }
    }
    cout<<endl;
    cout << "Matrix is:"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i-j == 0) cout << tri[n-1+i] << " ";
            else if (i-j == 1) cout << tri[i-1] << " ";
            else if (i-j == -1) cout << tri[2*n-1+i] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}
