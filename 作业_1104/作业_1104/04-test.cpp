//#include <iostream>
//using namespace std;
//
////4. ���б�д���룬�����������ֶ���Ĺ���������������ִ��˳��
//
////(1)ȫ�ֶ���Ĺ��캯�����ļ��е����к���(����main����)ִ��֮ǰ���á�
//
////(2)�ֲ��Զ�����
//
////(3)��̬(static)�ֲ�����
//
//class Person {
//private:
//	string m_Name;  //����
//	int m_Age;		//����
//	string m_Sex;     //�Ա�
//public:
//	//Ĭ�Ϲ��캯��
//	Person() {
//		cout << "Person ��Ĭ�Ϲ��캯��������" << endl;
//	}
//	//�вι��캯��
//	Person(string name, int age, string sex) {
//		m_Name = name;
//		m_Age = age;
//		m_Sex = sex;
//		cout <<m_Name<< "Person �вι��캯��������" << endl;
//	}
//	~Person() {
//		cout <<m_Name<< "Person ����������������" << endl;
//	}
//};
//
////��һȫ�ֶ���
//Person p1("����",28,"��");
//
////�ڶ��ֲ��Զ�����
//void test01() {
//	static Person p3("���", 18, "Ů");
//	Person p2("����", 20, "��");
//}
//
//
//int main() {
//
//	//���캯���ĵ���˳��Ϊ��ȫ�ֶ���>�ֲ��Զ�����˭�ȴ�����˭�Ĺ��캯�����ȱ�����
//	//���������ĵ���˳��Ϊ: �ֲ��Զ�����>��̬�ֲ�����>ȫ�ֶ���
//	test01();
//
//	getchar();
//	return 0;
//}