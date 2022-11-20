#include <iostream>
using namespace std;
#include <string>

//定义学生结构体
struct student {
	string name;	//姓名
	int age;		//年龄
	int score;		//分数
};

//定义老师结构体
struct teacher04 {
	int id;		//教师编号
	string name;	//教师姓名
	int age;		//年龄
	struct student stu;		//辅导的学生
};

int main04() {

	//结构体嵌套结构体
	//创建老师
	teacher04 t1;
	t1.id = 10001;
	t1.name = "老王";
	t1.age = 50;
	t1.stu.name = "张三";
	t1.stu.age = 20;
	t1.stu.score = 60;
	cout << "老师的姓名为：  " << t1.name << "  老师的职工编号：  " << t1.id
		<< "  老师的年龄：  " << t1.age << "  老师辅导的学生姓名：  " << t1.stu.name
		<< "  老师辅导学生的年龄：  " << t1.stu.age << "  老师辅导学生的成绩：  " << t1.stu.score;
	getchar();
	return 0;
}