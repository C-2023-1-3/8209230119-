#include<iostream>
using namespace std;
int a(int n);
int main()
{
	int n = 1;
	cout << "��һ��ժ��������" << a(n) << endl;
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