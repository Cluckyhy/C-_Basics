#include <iostream>
using namespace std;
#include <string>


//�ṹ��ָ��
struct Student {
	//����
	string  name;
	//����
	int age;
	//����
	int score;
};

int main03() {
	
	//1�������ṹ�����
	struct Student s1 = {"����",18,100};

	//2��ͨ��ָ����ָ��ṹ�����
	Student* p1 = &s1;

	//3��ͨ��ָ�������ʽṹ������е�����
	//ͨ���ṹ��ָ����ʽṹ���е����ԣ���Ҫ���� '->'
	cout << "������  " << p1->name << endl;
	cout << "���䣺  " << p1->age << endl;
	cout << "������  " << p1->score << endl;
	getchar();
	return 0;
}