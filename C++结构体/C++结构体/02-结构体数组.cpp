#include <iostream>
using namespace std;
#include <string>

//�ṹ������
//1������һ���ṹ��
struct Student {
	//����
	string name;
	//����
	int age;
	//����
	int score;
};

int main02() {
	//2�������ṹ������
	struct Student stuArray[3] = {
		{"����",18,100},
		{"����",20,56},
		{"����",22,95}
	};

	//3�����ṹ�������е�Ԫ�ظ�ֵ
	stuArray[2].name = "����";
	stuArray[0].age = 86;
	stuArray[1].score = 80;
	//4�������ṹ������
	for (int i = 0; i < 3; i++ ) {
		cout << "������   " << stuArray[i].name
			 << "���䣺   " << stuArray[i].age
			 << "������   " << stuArray[i].score << endl;
	}

	getchar();
	return 0;
}