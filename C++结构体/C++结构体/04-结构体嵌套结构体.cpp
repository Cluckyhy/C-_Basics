#include <iostream>
using namespace std;
#include <string>

//����ѧ���ṹ��
struct student {
	string name;	//����
	int age;		//����
	int score;		//����
};

//������ʦ�ṹ��
struct teacher04 {
	int id;		//��ʦ���
	string name;	//��ʦ����
	int age;		//����
	struct student stu;		//������ѧ��
};

int main04() {

	//�ṹ��Ƕ�׽ṹ��
	//������ʦ
	teacher04 t1;
	t1.id = 10001;
	t1.name = "����";
	t1.age = 50;
	t1.stu.name = "����";
	t1.stu.age = 20;
	t1.stu.score = 60;
	cout << "��ʦ������Ϊ��  " << t1.name << "  ��ʦ��ְ����ţ�  " << t1.id
		<< "  ��ʦ�����䣺  " << t1.age << "  ��ʦ������ѧ��������  " << t1.stu.name
		<< "  ��ʦ����ѧ�������䣺  " << t1.stu.age << "  ��ʦ����ѧ���ĳɼ���  " << t1.stu.score;
	getchar();
	return 0;
}