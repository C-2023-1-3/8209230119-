#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int letter = 0, space = 0, digit = 0, other = 0;
	cout << "�������ַ�����" << endl;
	getline(cin, str);
	for (auto c : str) {
		if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
			letter++;
		}
		else if (c == ' ') {
			space++;
		}
		else if (c >= '0' && c <= '9') {
			digit++;
		}
		else {
			other++;
		}
	}
	cout << "Ӣ����ĸ������" << letter << endl;
	cout << "�ո������" << space << endl;
	cout << "�����ַ�������" << digit << endl;
	cout << "�����ַ�����������" << other << endl;
	system("pause");
	return 0;
}