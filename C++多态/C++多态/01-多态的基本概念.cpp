//#include <iostream>
//using namespace std;
//
////��̬
//
////������
//class Animal {
//public:
//	//�麯��
//	virtual void speak() {
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat :public Animal {
//public:
//	//��д����������ֵ���� ������ �����б� ��ȫ��ͬ
//	//�����virtual��д�ɲ�д�����ǻ����virtual�Ǳ���Ҫд��
//	virtual void speak() {
//		cout << "Сè��˵��" << endl;
//	}
//};
//
////��ַ���  �ڱ���׶�ȷ��������ַ
////�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
//
////��̬��̬��������
////1���м̳й�ϵ
////2������Ҫ��д������麯��
//
////��̬��̬
////�����ָ��������� ָ������Ķ���
//void doSpeak(Animal &ani) {		//Animal &ani = cat;
//	ani.speak();
//}
//
//void test01() {
//
//	Cat c1;
//	doSpeak(c1);
//}
//
//
//
//
//int main() {
//
//	test01();
//
//	getchar();
//	return 0;
//}