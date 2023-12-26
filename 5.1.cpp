#include<iostream>
using namespace std;
class Time             
{
public:
	void settime()
	{
		cin >> hour;     
		cin >> minute;
		cin >> sec;
	}
	void showtime()
	{
		cout << hour<<":" << minute<<":" << sec << endl;
	}
private:              
int hour;
int minute;
int sec;
};
int main()
{
	Time t1;
	t1.settime();
	t1.showtime();
	return 0;
}