#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	int start=0;
	int end=str.length()-1;
	while(start<end)
	{
		int temp;
		temp=str[start];
		str[start]=str[end];
		str[end]=temp;
		start++;
		end--;
	}
	cout<<str;
}