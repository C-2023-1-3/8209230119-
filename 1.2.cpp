#include <iostream>
using namespace std;
#define pi 3.1415926
int main() {
	double r, h;
	cout << "ÊäÈëÔ²×¶µ×ÃæÔ²µÄ°ë¾¶" << endl;
	cin >> r;
	cout << "ÊäÈëÔ²×¶µÄ¸ß" << endl;
	cin >> h;
	double ans = pi * r * r * h / 3;
	cout << ans;
	return 0;
}