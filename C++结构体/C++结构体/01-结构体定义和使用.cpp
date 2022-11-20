#include <iostream>
using namespace std;
#include <string>

//1、创建学生数据类型  ： 学生包括（姓名，年龄，分数）
//自定义的数据类型，一些类型集合组成的一个类型
//语法：struct 类型名称 { 成员列表 };
struct Student {
	//成员列表

	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
}S3; //顺便创建一个结构体变量

//2、通过学生类型创建具体学生
//2.1、struct Student S1;
//2.2、struct Student S2 = {....};
//2.3、在定义结构体时顺便创建结构体变量
int main01() {
//2.1、struct Student S1;
	//struct关键字可以省略
	struct Student S1;
	//给S1属性赋值通过一个.访问结构体变量中的属性
	S1.name = "张三";
	S1.age = 18;
	S1.score = 80;
	cout << "姓名为：  " << S1.name << "年龄为：  " << S1.age << "分数为：  " << S1.score << endl;
//2.2、struct Student S2 = {....};
	struct Student S2 = {"李四",18,80};
	cout << "姓名为：  " << S2.name << "年龄为：  " << S2.age << "分数为：  " << S2.score << endl;
//2.3、在定义结构体时顺便创建结构体变量
	S3.name = "王五";
	S3.age = 20;
	S3.score = 76;
	cout << "姓名为：  " << S3.name << "年龄为：  " << S3.age << "分数为：  " << S3.score << endl;
	getchar();
	return 0;
}