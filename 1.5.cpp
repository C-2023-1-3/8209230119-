#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float F, C;
	cout << "请输入华氏度：" << endl;
	cin >> F;
	C = (F - 32) / 1.8;
	cout << "转换得出摄氏温度：" << C << endl;
}