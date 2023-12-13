#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	int letter = 0, space = 0, digit = 0, other = 0;
	cout << "请输入字符串：" << endl;
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
	cout << "英文字母个数：" << letter << endl;
	cout << "空格个数：" << space << endl;
	cout << "数字字符个数：" << digit << endl;
	cout << "其他字符个数个数：" << other << endl;
	system("pause");
	return 0;
}