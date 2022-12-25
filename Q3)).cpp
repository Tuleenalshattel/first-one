#include<iostream>
using namespace std;
int main()
{
	int x, sum=0;

	cout << "Find the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n):\n";
	cout << "enter the value ";
	cin >> x;
	for (int i = 0; i <= x; i++)
	  {
		sum += i * i;

	  }

	cout << " The sum is= " << sum << endl;




	return 0;
}