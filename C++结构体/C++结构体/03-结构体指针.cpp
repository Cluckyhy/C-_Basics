#include <iostream>
using namespace std;
#include <string>


//结构体指针
struct Student {
	//姓名
	string  name;
	//年龄
	int age;
	//分数
	int score;
};

int main03() {
	
	//1、创建结构体变量
	struct Student s1 = {"张三",18,100};

	//2、通过指针来指向结构体变量
	Student* p1 = &s1;

	//3、通过指针来访问结构体变量中的数据
	//通过结构体指针访问结构体中的属性，需要利用 '->'
	cout << "姓名：  " << p1->name << endl;
	cout << "年龄：  " << p1->age << endl;
	cout << "分数：  " << p1->score << endl;
	getchar();
	return 0;
}