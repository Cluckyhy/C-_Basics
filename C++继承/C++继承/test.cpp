#include <iostream>
using namespace std;

class Student {
private:
	int m_Num;
	string m_Name;
	char m_Sex[20];
public:
	void getValueF() {
		cout << "请输入学号，姓名，性别" << endl;
		cin >> m_Num >> m_Name >> m_Sex;
	}
	void displayF() {
		cout << m_Num << endl;
		cout << m_Name << endl;
		cout << m_Sex << endl;
	}
	void Stest() {

	}
};
class Student1 :public Student {
private:
	int m_Age;
	char m_Addr[20];
public:
	void getValue() {
		getValueF();
		cout << "请输入年龄和地址" << endl;
		cin >> m_Age >> m_Addr;
	}
	void display() {
		displayF();
		cout << m_Age << endl;
		cout << m_Addr << endl;
	}
	void Stest() {
		m_Age = 20;
		cout << m_Age << endl;
	}
};

int main() {

	Student1 stu;
	//stu.getValue();
	//stu.display();
	stu.Stest();


	getchar();
	return 0;
}