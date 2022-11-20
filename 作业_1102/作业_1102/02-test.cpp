//#include <iostream>
//using namespace std;
//
////自行写程序，验证类存在动态申请时，
////利用赋值（=）直接拷贝对象会出现内存泄漏问题，此时可用复制构造函数实现。
//
//class Person {
//private:
//	string m_Name;  //姓名
//	int m_Age;      //年龄
//	int* m_Score;   //分数
//public:
//	Person(string name,int age,int score);
//	//拷贝构造函数
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
//	cout << "Person 的析构函数被调用了" << endl;
//}
//void Person::display() {
//	cout << "学生姓名为：" << m_Name << endl;
//	cout << "学生年龄为：" << m_Age << endl;
//	cout << "学生分数为：" << *m_Score << endl;
//}
//
//void test01() {
//	Person p1("张三", 20, 89);
//	p1.display();
//	//Person p2("李四", 18, 56);
//	//p2 = p1;
//	//p2.display();
//	//在执行p1对象析构函数的时候，程序崩溃。原因是对象内部存在用户自己开辟的堆空间 m_Socre;
//	//如果直接用赋值（=）直接拷贝对象的话，对象p2指针变量的值被对象p1指针所覆盖，p1,p2两个对象的指针都指向p1开辟的堆空间
//	//所以对象p2开辟的堆空间将没指针指向它，所以程序先调用p2的析构函数，把两个人共同的指向的空间释放后，再调用p1析构，
//	//而释放的那个空间已经不存在了，所以程序崩溃。并且p2原来开辟的堆空间也就无人能使用，也访问不到了，所以出现内存泄漏。
//
//	//如果此时用复制构造函数的话，就可以解决此问题
//	//用以下代码替换上面的代码程序就不会崩溃
//	//因为在自己设计的复制构造函数中，我们将p2的m_Score又重新开辟了一个堆空间，所以p1,p2不会共用同一个内存空间
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