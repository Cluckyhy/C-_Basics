//#include <iostream>
//using namespace std;
//
////������
//class Animal{
//public:
//	int m_Age;
//};
//
////������̳�  ������μ̳е�����
////�ڼ̳�֮ǰ  ���Ϲؼ��� virtual ��Ϊ��̳�
//// Animal���Ϊ  �����
////����
//class Sheep :virtual public Animal {};
//
////����
//class Camel :virtual public Animal{};
//
////������
//class SheepCamel : public Sheep, public Camel {
//
//};
//
//void test01() {
//	SheepCamel sc;
//	sc.Sheep::m_Age = 20;
//	sc.Camel::m_Age = 18;
//	
//	//�����μ̳У���������ӵ����ͬ���ݣ���Ҫ������������
//	cout << "sc.Sheep::m_Age = " << sc.Sheep::m_Age << endl;
//	cout << "sc.Camel::m_Age = " << sc.Camel::m_Age << endl;
//
//	//�����������֪��  ֻҪ��һ�ݾͿ��ԣ����μ̳е������������ݣ���Դ�˷�
//	//������̳к�
//	cout <<"sc.m_Age ="<< sc.m_Age << endl;
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