//#include <iostream>
//#include <fstream>
//using namespace std;
//
//
////�����ļ��������������
//fstream fout, fin;
//
////д��f1�ļ�����
//void outputf1() {
//	//���ļ�
//	fout.open("f1.txt", ios::out);
//	//�ж��ļ��Ƿ�򿪳ɹ�
//	if (!fout.is_open()) {
//		cout << "�ļ�������" << endl;
//		return;
//	}
//	//д������
//	for (int i = 1; i <= 15; i++) {
//		fout << i * i << " ";
//	}
//	//�ر��ļ�
//	fout.close();
//}
//
////д��f2�ļ�����
//void outputf2() {
//	//���ļ�
//	fout.open("f2.txt", ios::out);
//	//�ж��ļ��Ƿ�򿪳ɹ�
//	if (!fout.is_open()) {
//		cout << "�ļ�������" << endl;
//		return;
//	}
//	//д������
//	for (int i = 1; i <= 10; i++) {
//		fout << 10 * i<< " ";
//	}
//	fout << 357.9 << endl;
//
//	//ǧ������ǹر��ļ��������
//	//��������һ�ξʹ��������ļ��������ȹر��ļ���ſ���
//	fout.close();
//}
//
////�����ļ�f1����
//void inputf1andf2(int array[]) {
//	//���ļ�f1
//	fin.open("f1.txt",ios::in);
//	//�ж��ļ��Ƿ����
//	if (!fin.is_open()) {
//		cout << "�ļ�������" << endl;
//		return;
//	}
//	//�����ļ�f1����Ϣ
//	for (int i = 0; i < 15; i++) {
//		fin >> array[i];
//	}
//	fin.close();
//	//���ļ�f2
//	fin.open("f2.txt", ios::in);
//	if (!fin.is_open()) {
//		cout << "�ļ�������" << endl;
//	}
//	//�����ļ�f2����Ϣ
//	for (int i = 15; i < 25; i++) {
//		fin >> array[i];
//	}
//	//�ر��ļ�
//	fin.close();
//}
//
//
////����������
//void sortArr(int arr[],int len) {
//	//ð������
//	for (int i = 0; i < len - 1; i++) {
//		for (int j = 0; j < len - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
////д��f3�ļ�����
//void outputf3(int arr[]) {
//	//���ļ�f3
//	fout.open("f3.txt", ios::out);
//	//�ж��ļ��Ƿ����
//	if (!fout.is_open()) {
//		cout << "�ļ�������" << endl;
//		return;
//	}
//	//д���ļ�f3����Ϣ
//	for (int i = 0; i < 25; i++) {
//		fout << arr[i];
//	}
//	fout.close();
//}
//
////����f3�ļ�
//void inputf3(int arr[]) {
//	//���ļ�f3
//	fin.open("f3.txt", ios::in);
//	//�ж��ļ��Ƿ����
//	if (!fin.is_open()) {
//		cout << "�ļ�������" << endl;
//		return;
//	}
//	//�����ļ�f3����Ϣ
//	for (int i = 0; i < 25; i++) {
//		fin >> arr[i];
//	}
//	//�ر��ļ�
//	fin.close();
//}
//
//
//
//int main() {
//
//	//����һ��������ݵ�����
//	int data1[25];
//	int data2[25];
//	
//	//д������
//	outputf1();
//	outputf2();
//
//	//�����ļ�
//	inputf1andf2(data1);
//
//	//��������
//	sortArr(data1,25);
//
//	outputf3(data1);
//	inputf3(data2);
//
//	for (int i = 0; i < 25; i++) {
//		cout << data2[i] << endl;
//	}
//
//	getchar();
//	return 0;
//}