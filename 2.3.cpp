#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a1, a2, a3;
	int C;
	cin >> a1 >> a2 >> a3;
	cout << "周长为：" << a1 + a2 + a3 << endl;
	if (a1 == a2 || a1 == a2 || a2 == a3)
	{
		cout << "是等腰三角形" << endl;
	}
	else
	{
		cout << "没有等腰捏" << endl;
	}
}