
#include <iostream>
using namespace std;
int main() {
    string name;
    cout<<"Enter string: ";
    getline(cin, name);
    int n=name.length();
    for (int i=0;i<n;i++) {
        if (name[i] >= 'A' && name[i]<='Z') {
            name[i]=name[i] + 32;
        }
        else if (name[i]>='a' && name[i]<='z') { 
            name[i]=name[i]-32;
        }
    }
    cout<<"Toggled string: "<<name<<endl;
    return 0;
}