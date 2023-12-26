#include<iostream>
using namespace std;
class student {
public:
	student() {}
	student(string id,int s):id(id),score(s){}
	string id;
	int  score;
};
void max(student* p) 
{
	student* t, * s;
	int max;
	for (t = p, s = t, max = t->score; t < (p + 5); t++) {
		if (t->score > max) {
			max = t->score;
			s = t;
		}
	}
	cout << "成绩最高的学生的学号为：" << s->id  << endl;
}
int main() 
{
	student s[5];
	cout << "输入学生学好和成绩捏：" << endl;
	for (int i = 0; i < 5; i++) {

		cin >> s[i].id >> s[i].score;
	}
	max(s);
	return 0;
 }
