#include <iostream>
using namespace std;
#include <string>
class Student {
	string name;
	int no;
	int score;
public:
	void setdata(string name, int no, int score) {
		this->name = name;
		this->no = no;
		this->score = score;
	}
	void display() {
		cout << "学生姓名：" << name << endl;
		cout << "学生学号：" << no << endl;
		cout << "学生成绩：" << score << endl;
	}

};

int main02() {
	Student S1;
	S1.setdata("陈慧亿", 5210763, 90);
	S1.display();
	getchar();
	return 0;
}