//#include <iostream>
//using namespace std;
//
////����д������֤����ڶ�̬����ʱ��
////���ø�ֵ��=��ֱ�ӿ������������ڴ�й©���⣬��ʱ���ø��ƹ��캯��ʵ�֡�
//
//class Person {
//private:
//	string m_Name;  //����
//	int m_Age;      //����
//	int* m_Score;   //����
//public:
//	Person(string name,int age,int score);
//	//�������캯��
//	Person(const Person &p);
//	~Person();
//	void display();
//};
//
//Person::Person(string name, int age, int score) {
//	m_Name = name;
//	m_Age = age;
//	m_Score = new int(score);
//}
//Person::Person(const Person &p){
//	m_Name = p.m_Name;
//	m_Age = p.m_Age;
//	m_Score = new int(*p.m_Score);
//}
//Person::~Person() {
//	if (m_Score != NULL) {
//		delete m_Score;
//	}
//	m_Score = NULL;
//	cout << "Person ������������������" << endl;
//}
//void Person::display() {
//	cout << "ѧ������Ϊ��" << m_Name << endl;
//	cout << "ѧ������Ϊ��" << m_Age << endl;
//	cout << "ѧ������Ϊ��" << *m_Score << endl;
//}
//
//void test01() {
//	Person p1("����", 20, 89);
//	p1.display();
//	//Person p2("����", 18, 56);
//	//p2 = p1;
//	//p2.display();
//	//��ִ��p1��������������ʱ�򣬳��������ԭ���Ƕ����ڲ������û��Լ����ٵĶѿռ� m_Socre;
//	//���ֱ���ø�ֵ��=��ֱ�ӿ�������Ļ�������p2ָ�������ֵ������p1ָ�������ǣ�p1,p2���������ָ�붼ָ��p1���ٵĶѿռ�
//	//���Զ���p2���ٵĶѿռ佫ûָ��ָ���������Գ����ȵ���p2�������������������˹�ͬ��ָ��Ŀռ��ͷź��ٵ���p1������
//	//���ͷŵ��Ǹ��ռ��Ѿ��������ˣ����Գ������������p2ԭ�����ٵĶѿռ�Ҳ��������ʹ�ã�Ҳ���ʲ����ˣ����Գ����ڴ�й©��
//
//	//�����ʱ�ø��ƹ��캯���Ļ����Ϳ��Խ��������
//	//�����´����滻����Ĵ������Ͳ������
//	//��Ϊ���Լ���Ƶĸ��ƹ��캯���У����ǽ�p2��m_Score�����¿�����һ���ѿռ䣬����p1,p2���Ṳ��ͬһ���ڴ�ռ�
//	Person p2(p1);
//	p2.display();
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