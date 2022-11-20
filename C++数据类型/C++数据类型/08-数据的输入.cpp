#include <iostream>
using namespace std;


int main() {

	//1、整型
	int a = 0;
	cout << "请给整型变量a赋值：" << endl;
	cin >> a;
	cout <<"整型变量a ="<< a << endl;

	//2、浮点型
	float f1 = 3.14f;
	cout << "请给浮点型变量f1赋值：" << endl;
	cin >> f1;
	cout << "浮点型变量f1 = " << f1 << endl;

	//3、字符型
	char ch1 = 's';
	cout << "请给字符型变量ch赋值" << endl;
	cin >> ch1;
	cout << "字符型变量ch1 = "<< ch1 << endl;

	//4、字符串型
	string str = "Hello World";
	cout << "请给字符串型变量str赋值：" << endl;
	cin >> str;
	cout << "字符串型变量str = " << str << endl;

	//5、布尔型
	bool b1 = true;
	cout << "请给布尔型变量b1赋值：" << endl;
	cin >> b1;  //bool类型  只要是非0的值都代表为真
	cout << "布尔型变量b1 = " << b1 << endl;

	getchar();
	return 0;
}