//#include <iostream>
//#include <fstream>
//using namespace std;
//
//
////���⣺Ϊʲô��Ҫд����д���ļ�f3���������ܴ���f3�ļ���дһ�ξʹ�������
////��������������Լ�������
////������ô�õ�bug�������Լ��Ĵ��Ĵ��⡣��д��f2�ļ������ǹر��ļ��ˡ����º����ڴ����ļ�ʱ��ֻдoutputf3�����ǲ��е�
////Ȼ���֣���дһ��outputf4�����ֿ��ԡ���Ϊ����outputf3����д��fout.close()�ر��ļ������Բ���ͨ������outputf4����������
////f3�ļ�������˵����һ���ļ��ǲ���Ҫ���ѵģ���Ҷ��ᡣ�������ǹر�һ���ļ�ȴ�Ǵ�������׷��Ĵ���Ȼ���ر�һ���򿪵��ļ�
////��ʮ����Ҫ��һ�����������һ��Ҫ�мǣ����ļ��������������ʱ��һ����Ҫ���ǹر��ļ�������
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
//		fout << i * i + 0.5 << " ";
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
//		fout << 10 * i + 0.5 << " ";
//	}
//	fout << 357.9 << endl;
//	//�ر��ļ�		--�˴����ǹر��ļ���
//	fout.close();
//}
//
////�����ļ�f1����
//void inputf1andf2(double array[]) {
//	//���ļ�f1
//	fin.open("f1.txt", ios::in);
//	//�ж��ļ��Ƿ����
//	if (!fin.is_open()) {
//		cout << "�ļ�������" << endl;
//		return;
//	}
//	//�����ļ�f1����Ϣ
//	for (int i = 0; i < 15; i++) {
//		fin >> array[i];
//	}
//	//�ر��ļ�
//	fin.close();
//
//
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
//void sortArr(double arr[], int len) {
//	//ð������
//	for (int i = 0; i < len - 1; i++) {
//		for (int j = 0; j < len - i - 1; j++) {
//			if (arr[j] > arr[j + 1]) {
//				double temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//			}
//		}
//	}
//}
//
//
////������
//
//void outputf3(double arr[]) {
//	//���ļ�f3
//	fout.open("f3.txt", ios::out);
//	//�ж��ļ��Ƿ����
//	if (!fout.is_open()) {
//		cout << "�ļ�������" << endl;
//		return;
//	}
//	//cout << "������" << endl;
//	//д���ļ�f3����Ϣ
//	for (int i = 0; i < 25; i++) {
//		fout << arr[i] <<" ";
//	}
//	//��������outputf2������û��д�ر��ļ������Ļ�����ô����������޷�����һ��f3.tex�ļ���
//	//ԭ�������δ�ر��ļ�֮ǰ�ǲ����ٴδ����ļ���
//	//Ȼ������ĺ���outputf4�������ܴ����ļ���������Ϊ����д��close�����Ծ���Ч������
//	fout.close();
//}
//
////void outputf4(double arr[]) {
////	//���ļ�f3
////	fout.open("f3.txt", ios::out);
////	//�ж��ļ��Ƿ����
////	if (!fout.is_open()) {
////		cout << "�ļ�������" << endl;
////		return;
////	}
////	cout << "���ĸ�" << endl;
////	//д���ļ�f3����Ϣ
////	for (int i = 0; i < 25; i++) {
////		fout << 55 << " ";
////	}
////	fout.close();
////}
//
//
//
////����f3�ļ�
//void inputf3(double arr[]) {
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
//
//int main() {
//
//	//����һ��������ݵ�����
//	double data1[25];
//	double data2[25];
//
//	//д������
//	outputf1();
//	outputf2();
//
//	//�����ļ�
//	inputf1andf2(data1);
//
//	//��������
//	sortArr(data1, 25);
//
//	outputf3(data1);
//	//outputf4(data1);
//	inputf3(data2);
//
//	for (int i = 0; i < 25; i++) {
//		cout << data2[i] << endl;
//	}
//
//
//	getchar();
//	return 0;
//}