#include<iostream>
using namespace std;
int main()
{
	char ch=65;
	cout << " pleace print letters from A to Z \n";
	while (ch >= 65 && ch <= 90)
	{
		cout << ch<<" ";
		ch = ch + 1;

	}
	
	return 0;
}