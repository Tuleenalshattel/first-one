#include<iostream>
using namespace std;
int main()
{
	int x;
	int fact=1;     //factorial
	cout << "pleace enter number \n";
	cin >> x;
	for (int i = 1; i <= x; i++)

	
		fact = fact * i;
	
	cout << "factorial=" << fact;
	return 0;
}
