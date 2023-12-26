#include<iostream>
using namespace std;
class Rectangular_columns
{
public:
	void set()
	{
		cout << "输入长宽高" << endl;
		cin >> length;
		cin >> width;
		cin >> height;
	}
	void count()
	{
		cout << "V=" << length * width * height << endl;
	}
private:
	int length;
	int width;
	int height;
};
int main()
{
	Rectangular_columns V1,V2,V3;
	V1.set();
	cout << "长方形1的体积" << endl;
	V1.count();
	V2.set();
	cout << "长方形2的体积" << endl;
	V2.count();
	V3.set();
	cout << "长方形3的体积" << endl;
	V3.count();
}
