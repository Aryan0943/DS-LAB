#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name1;
	string name2;
	cout<<"Enter the first string :"<<endl;
	getline(cin,name1);
	cout<<"Second string:";
	getline(cin,name2);
    name1=name1+" "+name2;
    cout<<name1;
	return 0;
}
