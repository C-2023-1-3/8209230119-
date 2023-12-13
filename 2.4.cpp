#include <iostream>
using namespace std;
int main()
{
	double a, b;
	char Q;
	cout << "请输入数字a，运算符Q，数字b" << endl;
	cin >> a >> Q >> b;
	double result;
	bool valid = true;
	switch (Q)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		if (b == 0)
		{
			cout << "除数不能为0" << endl;
			valid = false;
		}
		else
		{
			result = a / b;
		}
		break;
	case '%':
		if (b == 0)
		{
			cout << "除数不能为0" << endl;
			valid = false;
		}
		else
		{
			result = int(a) % int(b);
		}
		break;
	default:
		cout << "运算符不合法" << endl;
		valid = false;
		break;
	}
	if (valid)
	{
		cout << a << " " << Q << " " << b << " = " << result << endl;
	}
}