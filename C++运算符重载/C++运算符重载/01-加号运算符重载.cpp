//#include <iostream>
//using namespace std;
//
////�Ӻ����������
////�ܽ�1���������õ��������͵ı��ʽ��������ǲ����Ը��ĵ�
////�ܽ�2����Ҫ�������������
//
//class Person {
//public:
//	int m_A;
//	int m_B;
//	//1����Ա��������+��
//	//Person operator+(Person &p);
//};
//
////ȫ�ֺ�������+�ŵ���ȷ��дλ��
//Person operator+(Person& p1, Person& p2) {
//	Person temp;
//	temp.m_A = p1.m_A + p2.m_A;
//	temp.m_B = p1.m_B + p2.m_B;
//	return temp;
//}
//
////�������صİ汾
//Person operator+(Person &p1, int num) {
//	Person temp;
//	temp.m_A = p1.m_A + num;
//	temp.m_B = p1.m_B + num;
//	return temp;
//}
//
//void test01() {
//	Person p1;
//	p1.m_A = 10;
//	p1.m_B = 10;
//	Person p2;
//	p2.m_A = 10;
//	p2.m_B = 10;
//
//	//��Ա�������صı��ʵ���
//	//Person p3 = p1.operator+(p2);
//
//	//ȫ�ֺ������صı��ʵ���
//	//Person p3 = operator+(p1, p2);
//
//	Person p3 = p1 + p2;
//	//��������أ� Ҳ���Է�����������
//	Person p4 = p1 + 30;  //Person + int
//
//	cout << "p3.m_A = " << p3.m_A << "\t" << "p3.m_B = " << p3.m_B << endl;
//	cout << "p4.m_A = " << p4.m_A << "\t" << "p4.m_B = " << p4.m_B << endl;
//}
//
////1����Ա��������+�ţ�λ�ò���Ҫ��
////Person Person::operator+(Person &p) {
////	Person temp;
////	temp.m_A = this->m_A + p.m_A;
////	temp.m_B = this->m_B + p.m_B;
////	return temp;
////}
//
////2��ȫ�ֺ�������+��(����д�ᱨ����Ϊд���������������test01�������棬ǰ��ļӺ������Ҳ�����
//// ����ȫ�ֺ�������һ��Ҫд�ڵ���ǰ)
////Person operator+(Person& p1, Person& p2) {
////	Person temp;
////	temp.m_A = p1.m_A + p2.m_A;
////	temp.m_B = p1.m_B + p2.m_B;
////	return temp;
////}
//
//int main() {
//
//	test01();
//
//	getchar();
//	return 0;
//}