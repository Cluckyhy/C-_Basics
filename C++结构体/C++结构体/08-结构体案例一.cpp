#include <iostream>
#include <string>
using namespace std;

//ѧ���Ľṹ�嶨��
//���������ʦ�ṹ��û��teacher01,�����ѧ���ṹ���ɶ��������
//дstruct student  ����
struct student {
	//������
	string ssname;
	//������
	int Sscore;
};

//��ʦ�Ľṹ�嶨��
//дstruct teacher  ����
struct teacher {
	//��ʦ��������
	string tname;
	//ѧ������
	struct student sArray[5];
};

//����ʦ��ѧ����ֵ�ĺ���
void set_Value(struct teacher tArray[], int len) {
	//����ʦ��ֵ
	string nameSeed = "ABCDE";
	for (int i = 0; i < len; i++) {
		tArray[i].tname = "Teacher_";
		tArray[i].tname += nameSeed[i];
		//ͨ��ѭ����ÿ����ʦ����ѧ����ֵ
		for (int j = 0; j < 5; j++) {
			tArray[i].sArray[j].ssname = "Student_";
			tArray[i].sArray[j].ssname += nameSeed[j];
			tArray[i].sArray[j].Sscore = 60;
		}
	}
}
//��ӡ������Ϣ�ĺ���
void printInfo(struct teacher tArray[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "��ʦ�������� " << tArray[i].tname << endl;
		for (int j = 0; j < 5; j++) {
			cout << "ѧ��������" << tArray[i].sArray[j].ssname <<
				"���Եķ�����" << tArray[i].sArray[j].Sscore << endl;
		}
	}
}


int main08() {

	//1������3����ʦ������
	struct teacher tArray[3];
	int len = sizeof(tArray) / sizeof(tArray[0]);
	//2��ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����Ϣ��ֵ
	set_Value(tArray, len);
	//3����ӡ������ʦ������ѧ����Ϣ
	printInfo(tArray, len);
	getchar();
	return 0;
}
//void setValue(struct teacher tArray[], int len) {
//	string nameSeed = "ABCDE";
//	//����ʦ��ֵ
//	for (int i = 0; i < len; i++) {
//		tArray[i].Tname = "Teacher_";
//		tArray[i].Tname += nameSeed[i];
//		//ͨ��ѭ����ÿ����ʦ����ѧ����ֵ
//		for (int j =0; j < 5; j++) {
//			tArray[i].sArray[j].Sname = "Student_";
//			tArray[i].sArray[j].Sname += nameSeed[j];
//			tArray[i].sArray[j].Sscore = 60;
//		}
//	}
//}

//void printInfo(struct teacher tArray[], int len) {
//	for (int i = 0; i < len;i++) {
//		cout << "��ʦ�������� " << tArray[i].Tname<< endl;
//		for (int j = 0; j <5;j++) {
//			cout << "ѧ��������" << tArray[i].sArray[j].Sname
//				 <<"���Եķ�����"<<tArray[i].sArray[j].Sscore<< endl;
//		}
//	}
//
//}