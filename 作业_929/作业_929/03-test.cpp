#include <iostream>
using namespace std;

const int conint = 20;
int main03() {
	//conint = 10; //报错显示表达式必须是可修改的左值
	cout << "常量数为：" << conint << endl;
	int a = 10;
	int b = 30;
	const int* p = &a;
	//*p = 50;  //报错显示表达式必须是可修改的左值
	int* const p1 = &b;
	//p1 = &a;	//报错显示表达式必须是可修改的左值
	return 0;
}