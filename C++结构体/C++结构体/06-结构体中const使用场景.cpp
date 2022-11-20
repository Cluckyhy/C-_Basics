#include <iostream>
using namespace std;

//const的使用场景
struct student {
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
};
//打印函数
//将函数中的形参改为指针，可以减少内存中的空间，而且不会复制一个新的副本出来
void printStudent(const student *stu) {
	//stu->age = 150;  //形参中加入const之后，一旦有修改的操作就会报错，可以防止我的误操作
 	cout << "姓名：" << stu->name << "  年龄：" << stu->age << "  分数：" << stu->score << endl;
}

int main06() {

	//创建结构体变量
	struct student s = {"张三",18,88};

	//通过函数来打印结构体变量的信息
	printStudent(&s);
	cout << "main函数中张三的年龄：" << s.age << endl;
	getchar();
	return 0;
}