//#include <iostream>
//using namespace std;
//
////1、定义常对象
////人类
//class Person {
//private:
//	string m_Name;  //姓名
//	//声明mutable  这样const成员函数也可以修改年龄的值了
//	mutable int m_Age;		//年龄
//public:
//	//人类的构造函数
//	Person(string name,int age) {
//		m_Name = name;
//		m_Age = age;
//		cout << "我是人类的构造函数" << endl;
//	}
//	~Person() {
//		cout << "我是人类的析构函数" << endl;
//	}
//	//打印信息
//	void display() const {
//		//m_Name = "李四";
//		m_Age = 33;  //因为m_Age被mutable所修饰，所以这里可以修改成员变量的值
//		cout << m_Name << "今年" << m_Age << "岁了";
//	}
//};
//
//
//int main() {
//
//	//定义常对象
//	Person const p1("张三",20);
//	p1.display();  //一开始报错，因为const对象只能调用const成员函数，后来在display()后面加const就好了
//	/*Person p2("王五",22);
//	p2.display();*/
//
//
//	getchar();
//	return 0;
//}