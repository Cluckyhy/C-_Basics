#include <iostream>
using namespace std;
#include <string>


//Ϊɶͨ�����̸�ֵ�ͻᱨ������


//����ѧ���ṹ��
struct student {
	string name;
	int score;
};
//������ʦ�ṹ��
struct teacher07 {
	string name;
	struct student s[5];
};
//��������ʦ��ѧ�����ƺ���
//void set_value(teacher07 *t,student *s);
void set_value(teacher07 teaarray[], int len);

int main() {
	//����ѧ���ṹ�����
	struct student s;
	//����һ��������3����ʦ
	teacher07 teaarray[3];
	int len = sizeof(teaarray) / sizeof(teaarray[0]);
	//��ӡ������ʦ��ѧ����Ϣ
	/*for (int i = 0; i < len; i++) {*/
		//set_value(teaarray,teaarray[i].s);
		set_value(teaarray, len);
	//}
	/*set_value(teaarray, len);*/
	for (int j = 0; j < len; j++) {
		cout << "��" << j + 1 << "λ��ʦ������Ϊ��" << teaarray[j].name << endl;
		for (int k = 0; k < 5;k++) {
			cout << "��" << j+1 << "λ��ʦ�����ĵ�"<< k+1 <<"ѧ������Ϊ��" << teaarray[j].s[k].name << endl;
			cout << "��" << j+1 << "λ��ʦ�����ĵ�" << k+1 << "ѧ������Ϊ��" << teaarray[j].s[k].score << endl;
		}
	}
	getchar();
	return 0;
}
//���帳ֵ����
//void set_value(teacher07 *t,student *s) {
	/*t.name = "����";
	t.s[0].name = "����";
	t.s[0].score = 86;
	t.s[1].name = "����";
	t.s[1].score = 56;
	t.s[2].name = "����";
	t.s[2].score = 70;
	t.s[3].name = "���";
	t.s[3].score = 38;
	t.s[4].name = "���";
	t.s[4].score = 60;*/
//	for (int i = 0; i < 3;i++) {
//		cout << "������ڣ�" << i + 1 << "λ��ʦ��������" << endl;
//		cin >> t[i].name;
//		for (int j = 0; j < 5; j++) {
//			cout << "������ڣ�" << j+1 << "��ѧ����������" << endl;
//			cin >> s[j].name;
//			cout << "������ڣ�" << j+1 << "��ѧ���ķ�����" << endl;
//			cin >> s[j].score;
//		}
//	}
//}
void set_value(teacher07 teaarray[], int len) {
	for (int i = 0; i < len;i++) {
		cout << "������ڣ�" << i + 1 << "λ��ʦ��������" << endl;
		cin >> teaarray[i].name;
		for (int j = 0; j < 5;j++) {
			cout << "������ڣ�" << j + 1 << "��ѧ����������" << endl;
			cin >> teaarray[i].s[j].name;
			cout << "������ڣ�" << j + 1 << "��ѧ���ķ�����" << endl;
			cin >> teaarray[i].s[j].score;
		}
	}
}