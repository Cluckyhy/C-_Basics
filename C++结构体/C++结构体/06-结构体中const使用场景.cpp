#include <iostream>
using namespace std;

//const��ʹ�ó���
struct student {
	//����
	string name;
	//����
	int age;
	//����
	int score;
};
//��ӡ����
//�������е��βθ�Ϊָ�룬���Լ����ڴ��еĿռ䣬���Ҳ��Ḵ��һ���µĸ�������
void printStudent(const student *stu) {
	//stu->age = 150;  //�β��м���const֮��һ�����޸ĵĲ����ͻᱨ�����Է�ֹ�ҵ������
 	cout << "������" << stu->name << "  ���䣺" << stu->age << "  ������" << stu->score << endl;
}

int main06() {

	//�����ṹ�����
	struct student s = {"����",18,88};

	//ͨ����������ӡ�ṹ���������Ϣ
	printStudent(&s);
	cout << "main���������������䣺" << s.age << endl;
	getchar();
	return 0;
}