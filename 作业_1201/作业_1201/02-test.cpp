//#include <iostream>
//using namespace std;
//
////虚基类的定义
//class Person {
//public:
//	//姓名
//	string m_Name;
//	//年龄
//	int m_Age;
//	//身高
//	double m_Height;
//public:
//	Person(string name,int age,double height){
//		m_Name = name;
//		m_Age = age;
//		m_Height = height;
//	}
//	void display();
//};
//
//
////继承虚基类
//class Student :virtual public Person {
//public:
//	//学号
//	int m_Sno;
//public:
//	Student(string name, int age, double height, int sno) :Person(name, age, height), m_Sno(sno) {}
//	void display();
//};
//
////继承虚基类
//class Teacher :virtual public Person {
//public:
//	//工资
//	int m_Money;
//public:
//	Teacher(string name, int age, double height, int money) :Person(name, age, height), m_Money(money) {}
//	void display();
//};
//
////多重继承Student和Teacher类
//class Graduate :public Student, public Teacher {
//private:
//	//分数
//	int m_Score;
//public:
//	//在最后的派生类中，不仅要对直接基类进行初始化，而且还要对虚基类进行初始化
//	Graduate(string name, int age, double height, int sno, int money, int score) :Person(name,age,height),Student(name, age, height, sno), Teacher(name, age, height, money), m_Score(score) {}
//	//这里实现的同名函数覆盖
//	void display();
//};
//
//void Graduate::display() {
//	cout << "名字为：" << m_Name << endl;
//	cout << "年龄为：" << m_Age << endl;
//	cout << "身高为：" << m_Height << endl;
//	cout << "学号为：" << m_Sno << endl;
//	cout << "工资为：" << m_Money << endl;
//	cout << "成绩为：" << m_Score << endl;
//}
//
//
////虚基类的作用是：
////使一个类多继承时，而它的直接基类又同时继承一个类，如果不使用虚基类，那么最后的派生类将会继承多个基类中的数据成员
////这样就会浪费我们的空间去存放性质和功能一样的成员函数，而使用虚基类的话，就可以很好的避免这样的情况发生
////如果直接基类是虚继承基类的话，那么最后的派生类将只会继承虚基类中的一份数据成员，减少了数据的冗余
////需要注意的是，当最终派生类的所有直接基类都必须虚继承自虚基类，不然的话，最终派生类还会留有没虚继承直接基类中的虚基类的数据成员
////并且，最后派生类的构造函数中，不仅要负责对直接基类的初始化，还要对虚基类进行初始化
//
//
//int main() {
//
//	Graduate g1("张三",18,1.80,5210760,5000,89);
//	g1.display();
//	
//	getchar();
//	return 0;
//}