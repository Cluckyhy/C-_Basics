#include <iostream>
using namespace std;

//函数的常见样式
//1、无参无返
void test01() {
	cout << "this is test01;" << endl;
}
//2、无参有返
int test02() {
	cout << "this is test02;"<< endl;
	return 100;
}
//3、有参无返
void test03(int a) {
	cout << "this is test03 a = ;" << a <<endl;
}
//4、有参有返
int test04(int a) {
	cout << "this is test04 a =" << a << endl;
	return a*2;
}
int main04(){
	//无参数无返函数调用
	test01();
	//无参有返函数调用
	int num = test02();
	cout << "num = " << num << endl;
	//有参无返函数调用
	test03(200);
	//有参有返的函数调用
	int dounum = test04(5);
	cout << "a 的两倍为： " << dounum << endl;
	getchar();
	return 0;
}