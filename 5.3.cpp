#include<iostream>
using namespace std;
class Rectangular_columns
{
public:
	void set()
	{
		cout << "���볤���" << endl;
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
	cout << "������1�����" << endl;
	V1.count();
	V2.set();
	cout << "������2�����" << endl;
	V2.count();
	V3.set();
	cout << "������3�����" << endl;
	V3.count();
}
