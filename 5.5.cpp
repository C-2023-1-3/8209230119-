#include <iostream>
using namespace std;
class Point {
private:
	int x; int y;
public:
	Point(int x = 60, int y = 80) {
		this->x = x; this->y = y;
	}
	void setPoint(int i, int j) {
		x += i; y += j;
	}
	void display() {
		cout << (" << x << "," << y << ");
	}
	~Point() {};
};
int main() {
	Point a;
	a.setPoint(2, 5);
	a.display();
	return 0;
}