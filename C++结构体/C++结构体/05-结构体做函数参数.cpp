#include <iostream>
using namespace std;
#include <string>
//����һ��ѧ���Ľṹ��
struct student {
	string name; //����	
	int age;	//����
	int score;	//����
};
//��ӡѧ����Ϣ�ĺ���
//1��ֵ����
void printStudent1(student stu) {
	stu.age = 100;
	cout << "�Ӻ���1�� ������" << stu.name << "  ���䣺" << stu.age << "  ������" << stu.score << endl;
}
//2����ַ����
void printStudent2(student *stup) {
	stup->age = 200;
	cout << "�Ӻ���2�� ������" << stup->name << "  ���䣺" << stup->age << "  ������" << stup->score << endl;
}
int main05() {

	//�ṹ���������Ĳ���
	//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ

	//����һ���ṹ�����
	struct student s;
	s.name = "����";
	s.age = 18;
	s.score = 60;
	//printStudent1(s);
	printStudent2(&s);
	cout << "��main�����д�ӡ�Ľ��������" << s.name << "  ���䣺" << s.age << "  ������" << s.score;
	getchar();
	return 0;
}