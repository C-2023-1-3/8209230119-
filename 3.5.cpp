#include<iostream>
using namespace std;
int a(int n);
int main()
{
	int n = 1;
	cout << "第一天摘的桃子数" << a(n) << endl;
	return 0;
}
int a(int n)
{
	int num;
	if (n == 10)
	{
		num = 1;
		return num;
	}
	else
		num = (a(n + 1) + 1) * 2;
	return num;
}