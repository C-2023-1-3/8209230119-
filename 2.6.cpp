#include <iostream>
using namespace std;
int main()
{
	int a, b, c, z;
	cout << "请输入两个整数：";
	cin >> a >> b;
	c = a * b;
	if (b > a)  
	{
		z = a;
		a = b;
		b = z;
	}
	while (a % b) 
	{
		z = b;
		b = a % b;
		a = z;
	}
	c = c / b;
	cout << "最大公约数是：" << b << endl;
	cout << "最小公倍数是：" << c << endl;
}