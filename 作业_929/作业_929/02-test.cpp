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
		cout << "ѧ��������" << name << endl;
		cout << "ѧ��ѧ�ţ�" << no << endl;
		cout << "ѧ���ɼ���" << score << endl;
	}

};

int main02() {
	Student S1;
	S1.setdata("�»���", 5210763, 90);
	S1.display();
	getchar();
	return 0;
}