#include<iostream>
using namespace std;
int main()
{
    double a, x, y;
    cin >> a;
    if (a >= 0) {
        x = (a + 1) / 2;
        y = (x + a / x) / 2;
        while (x - y >= 10e-5) {
            x = y;
            y = (x + a / x) / 2;
        }
        cout << y << endl;
    }
    else cout << "a无平方根" << endl;
    return 0;
}