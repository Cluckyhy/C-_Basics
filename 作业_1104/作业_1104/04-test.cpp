//#include <iostream>
//using namespace std;
//
////4. 自行编写代码，检验以下三种对象的构造与析构函数的执行顺序
//
////(1)全局对象的构造函数在文件中的所有函数(包括main函数)执行之前调用。
//
////(2)局部自动对象
//
////(3)静态(static)局部对象
//
//class Person {
//private:
//	string m_Name;  //姓名
//	int m_Age;		//年龄
//	string m_Sex;     //性别
//public:
//	//默认构造函数
//	Person() {
//		cout << "Person 的默认构造函数被调用" << endl;
//	}
//	//有参构造函数
//	Person(string name, int age, string sex) {
//		m_Name = name;
//		m_Age = age;
//		m_Sex = sex;
//		cout <<m_Name<< "Person 有参构造函数被调用" << endl;
//	}
//	~Person() {
//		cout <<m_Name<< "Person 的析构函数被调用" << endl;
//	}
//};
//
////第一全局对象
//Person p1("张三",28,"男");
//
////第二局部自动对象
//void test01() {
//	static Person p3("王妞", 18, "女");
//	Person p2("李四", 20, "男");
//}
//
//
//int main() {
//
//	//构造函数的调用顺序为：全局对象>局部自动对象谁先创建出谁的构造函数就先被调用
//	//析构函数的调用顺序为: 局部自动对象>静态局部对象>全局对象
//	test01();
//
//	getchar();
//	return 0;
//}