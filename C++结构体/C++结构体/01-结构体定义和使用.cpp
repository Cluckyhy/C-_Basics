#include <iostream>
using namespace std;
#include <string>

//1������ѧ����������  �� ѧ�����������������䣬������
//�Զ�����������ͣ�һЩ���ͼ�����ɵ�һ������
//�﷨��struct �������� { ��Ա�б� };
struct Student {
	//��Ա�б�

	//����
	string name;
	//����
	int age;
	//����
	int score;
}S3; //˳�㴴��һ���ṹ�����

//2��ͨ��ѧ�����ʹ�������ѧ��
//2.1��struct Student S1;
//2.2��struct Student S2 = {....};
//2.3���ڶ���ṹ��ʱ˳�㴴���ṹ�����
int main01() {
//2.1��struct Student S1;
	//struct�ؼ��ֿ���ʡ��
	struct Student S1;
	//��S1���Ը�ֵͨ��һ��.���ʽṹ������е�����
	S1.name = "����";
	S1.age = 18;
	S1.score = 80;
	cout << "����Ϊ��  " << S1.name << "����Ϊ��  " << S1.age << "����Ϊ��  " << S1.score << endl;
//2.2��struct Student S2 = {....};
	struct Student S2 = {"����",18,80};
	cout << "����Ϊ��  " << S2.name << "����Ϊ��  " << S2.age << "����Ϊ��  " << S2.score << endl;
//2.3���ڶ���ṹ��ʱ˳�㴴���ṹ�����
	S3.name = "����";
	S3.age = 20;
	S3.score = 76;
	cout << "����Ϊ��  " << S3.name << "����Ϊ��  " << S3.age << "����Ϊ��  " << S3.score << endl;
	getchar();
	return 0;
}