//#include <iostream>
//using namespace std;
//
////�̳еĺô��������ظ��Ĵ���
////�﷨��class ���� : �̳з�ʽ ����
////����   Ҳ��Ϊ������
////����   Ҳ��Ϊ�������
//
//
//
//
//
////��ͨʵ��ҳ��
////javaҳ��
////class Java {
////public:
////	void header() {
////		cout << "��ҳ�������Ρ���¼��ע�ᡢ.....(����ͷ��)" << endl;
////	}
////	void left() {
////		cout << "java��Python��C++��....(���������б�)" << endl;
////	}
////	void content() {
////		cout << "Javaѧ����Ƶ" << endl;
////	}
////	void footer() {
////		cout << "�������ġ�����������վ�ڵ�ͼ.....�������ײ���" << endl;
////	}
////};
////class Python {
////public:
////	void header() {
////		cout << "��ҳ�������Ρ���¼��ע�ᡢ.....(����ͷ��)" << endl;
////	}
////	void left() {
////		cout << "java��Python��C++��....(���������б�)" << endl;
////	}
////	void content() {
////		cout << "Pythonѧ����Ƶ" << endl;
////	}
////	void footer() {
////		cout << "�������ġ�����������վ�ڵ�ͼ.....�������ײ���" << endl;
////	}
////};
////class CPP {
////public:
////	void header() {
////		cout << "��ҳ�������Ρ���¼��ע�ᡢ.....(����ͷ��)" << endl;
////	}
////	void left() {
////		cout << "java��Python��C++��....(���������б�)" << endl;
////	}
////	void content() {
////		cout << "C++ѧ����Ƶ" << endl;
////	}
////	void footer() {
////		cout << "�������ġ�����������վ�ڵ�ͼ.....�������ײ���" << endl;
////	}
////};
//
//
////�̳�ʵ��ҳ��
//
////����ҳ����
//class BasePage {
//	public:
//		void header() {
//			cout << "��ҳ�������Ρ���¼��ע�ᡢ.....(����ͷ��)" << endl;
//		}
//		void left() {
//			cout << "java��Python��C++��....(���������б�)" << endl;
//		}
//		void footer() {
//			cout << "�������ġ�����������վ�ڵ�ͼ.....�������ײ���" << endl;
//		}
//};
//
////Javaҳ��
//class Java : public BasePage {
//public:
//	void content() {
//		cout << "Javaѧ����Ƶ" << endl;
//	}
//};
//
////Pythonҳ��
//class Python : public BasePage {
//public:
//	void content() {
//		cout << "Pythonѧ����Ƶ" << endl;
//	}
//};
////C++ҳ��
//class Cpp : public BasePage {
//public:
//	void content() {
//		cout << "C++ѧ����Ƶ" << endl;
//	}
//};
//
//
//void test01() {
//	cout << "Java������Ƶҳ�����£�" << endl;
//	Java ja;
//	ja.header();
//	ja.left();
//	ja.content();
//	ja.footer();
//
//	cout << "-------------------------" << endl;
//	Python py;
//	py.header();
//	py.left();
//	py.content();
//	py.footer();
//
//	cout << "-------------------------" << endl;
//	Cpp cpp;
//	cpp.header();
//	cpp.left();
//	cpp.content();
//	cpp.footer();
//}
//
//
//int main() {
//
//	test01();
//
//	getchar();
//	return 0;
//}