#include<iostream>
using namespace std;

int main() 
{
	double arr[9];
	cout << "����10������ : " << endl;
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
	}
	for (int a = 0; a < 9; a++)
	{
		for (int b = 0; b < 9 - 1 - a; b++)
		{
			if (arr[b] > arr[b + 1])
			{
				double temp = arr[b];
				arr[b] = arr[b + 1];
				arr[b + 1] = temp;
			}
		}
	}
	cout << "�����" << endl;
		for (int i = 0; i < 9; i++)
	    {
		cout << arr[i] << "";
	    }

	cout << endl;
	return 0;
}