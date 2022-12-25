#include<iostream>
using namespace std;
int main()
{
	for (int raw = 1; raw <= 5; raw++)
	{
		if (raw % 2 != 0)
		{
			for (int col = 1; col <= 8; col++)
				cout << raw;
		}
		cout << endl;
	}


	return 0;
}