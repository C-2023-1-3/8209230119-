#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int a1, a2, a3;
	int C;
	cin >> a1 >> a2 >> a3;
	cout << "�ܳ�Ϊ��" << a1 + a2 + a3 << endl;
	if (a1 == a2 || a1 == a2 || a2 == a3)
	{
		cout << "�ǵ���������" << endl;
	}
	else
	{
		cout << "û�е�����" << endl;
	}
}