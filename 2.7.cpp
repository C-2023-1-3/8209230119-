#include <iostream>
using namespace std;
int main() {
	int line = 10;
	for (int i = 1; i <= line; i++)
	{
		if (i % 2 == 1)
		{
			for (int k = 1; k <= (i + 1) / 2; k++)
			{
				cout << "*";
			}
		}
		else
			cout << " ";
		cout << endl;
	}
	system("pause");
	return 0;
}