#include <iostream>
using namespace std;
#include <string>
//定义一个学生的结构体
struct student {
	string name; //姓名	
	int age;	//年龄
	int score;	//分数
};
//打印学生信息的函数
//1、值传递
void printStudent1(student stu) {
	stu.age = 100;
	cout << "子函数1中 姓名：" << stu.name << "  年龄：" << stu.age << "  分数：" << stu.score << endl;
}
//2、地址传递
void printStudent2(student *stup) {
	stup->age = 200;
	cout << "子函数2中 姓名：" << stup->name << "  年龄：" << stup->age << "  分数：" << stup->score << endl;
}
int main05() {

	//结构体做函数的参数
	//将学生传入到一个参数中，打印学生身上的所有信息

	//创建一个结构体变量
	struct student s;
	s.name = "张三";
	s.age = 18;
	s.score = 60;
	//printStudent1(s);
	printStudent2(&s);
	cout << "在main函数中打印的结果：姓名" << s.name << "  年龄：" << s.age << "  分数：" << s.score;
	getchar();
	return 0;
}