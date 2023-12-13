#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char inputChar;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û" << endl;
	cin >> inputChar;									
	if (inputChar >= 'a' && inputChar <= 'z')
	{
		cout << char(inputChar - 'a' + 'A') << endl;
	}														
	else {
		cout << static_cast<int>(inputChar + 1) << endl;
	}													

	system("pause");
	return 0;
}