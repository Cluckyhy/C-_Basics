//#include <iostream>
//using namespace std;
//#include <fstream>
//
////1���������������ͷ�ļ�
////2������������
////3�����ļ�
////4��д���ļ�
////5���ر��ļ�
//
//int main() {
//
//	//2���������������
//	fstream ofs;
//	//3�����ļ�
//	ofs.open("test.txt", ios::out);
//	//4��д���ļ�
//	if (!ofs.is_open()) {
//		cout << "�ļ�������" << endl;
//	}
//	else {
//		ofs << "����" << endl;
//		ofs << "18" << endl;
//		ofs << "��������" << endl;
//	}
//	//5���ر��ļ�
//	ofs.close();
//
//	//2.2����������������
//	fstream ifs;
//	//2.3�����ļ�
//	ifs.open("test.txt", ios::in);
//	//2.4�����ļ�
//	string name, adds;
//	int age;
//	if (!ifs.is_open()) {
//		cout << "�ļ�������" << endl;
//	}
//	else {
//		ifs >> name >> age >> adds;
//	}
//	//2.5���ر��ļ�
//	ifs.close();
//
//	cout << name << endl;
//	cout << age << endl;
//	cout << adds << endl;
//
//
//
//	getchar();
//	return 0;
//}