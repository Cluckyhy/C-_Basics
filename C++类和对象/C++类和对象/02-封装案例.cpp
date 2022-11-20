#include <iostream>
using namespace std;

//设计一个学生类，属性有姓名和学号
//可以给姓名和学号赋值，可以显示学生的姓名和学号

//定义一个学生类
class Student {
public:   //公共权限
	
	//类中的属性和行为，我们统称为 成员
	//属性   成员属性  成员变量
	//行为   成员函数  成员方法


	//属性
	string m_name;  //姓名
	int m_no;       //学号

	//行为
	//给学生姓名和学号赋值函数
	void setValue(string name,int no){
		m_name = name;
		m_no = no;
	}
	//展示学生姓名和学号函数
	void display() {
		cout << "学生姓名为： " << m_name << endl;
		cout << "学生的学号为： " << m_no << endl;
	}
};

int main02() {

	//创建一个具体的学生，实例化一个对象
	Student s1;
	//给s1对象进行属性赋值操作
	s1.setValue("陈慧亿",5210763);
	//显示学生信息
	s1.display();

	Student s2;
	s2.setValue("李四",5210766);
	s2.display();
	getchar();
	return 0;
}