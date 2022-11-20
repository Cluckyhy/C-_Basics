#include <iostream>
using namespace std;

//占位参数
//语法：返回值类型 函数名（数据类型）{}

//目前阶段的占位参数，我们还用不上，后面课程我们会用到；
//占位参数 还可以有默认参数
void func02(int a,int = 10) {
	cout << "this is func02" << endl;
}

int main02() {

	func02(10);  //如果占位参数没写默认参数，必须填写

	getchar();
	return 0;
}