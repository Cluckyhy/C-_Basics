#include <iostream>
using namespace std;

//3、对复数类添加转换构造函数，将double型转换成复数对象；
//   添加类型转换函数对double的重载；添加加法重载函数，并进行测试。

//我的问题
//第一：为什么转换构造函数里面的参数要用引用才有用，转换构造函数参数里double 没用引用就会报错
//第二：为什么只能用友元函数的方式进行+号重载才有用，用成员函数的方式就不行
//第三：用类型转换函数，怎么输出的是(4.3,0i)这样的结果


class Complex {
private:

	double m_Real;
	double m_Imag;
	
public:
	//friend Complex operator+(Complex c1, Complex c2);
	//错误写法，临时对象没有别名，不能传引用进来
	//friend Complex operator+(Complex& c1, Complex& c2);
	//friend Complex operator+(Complex c1, double c2);

	//第一个问题的根源，就是这里，如果这里用了默认无参构造函数，那么转换构造函数里的参数就不需要引用
	Complex() {}

	//错误示范，而且会出问题，如果和Conplexx(double& b);搭配使用的话
	//Complex(double real = 5, double imag = 6);
	Complex(double real, double imag);
	//转换构造函数
	//explicit Complex(double b);
	Complex(double b);
	//类型转换函数，对double的重载。
	//operator double();
	//加法重载函数
	Complex& operator+(Complex c);
	//打印结果
	void display() {
		cout << "(" << m_Real << "," << m_Imag << "i)" << endl;
	}
};
Complex::Complex(double real, double imag) {
	m_Real = real;
	m_Imag = imag;
}

//转换构造函数
Complex::Complex(double b) {
	m_Real = b;
	m_Imag = 0;
}


//成员函数重载+号
Complex& Complex::operator+(Complex c) {
	Complex c3;
	c3.m_Real = m_Real + c.m_Real;
	c3.m_Imag = m_Imag + c.m_Imag;
	return c3;
}


//类型转换函数
//Complex::operator double() {
//	/*cout << m_Real << endl;
//	cout << m_Imag << endl;*/
//	return m_Real;
//}


//重载+号运算符(Complex,Complex)
//Complex operator+(Complex c1, Complex c2) {
//	return Complex(c1.m_Real + c2.m_Real, c1.m_Imag + c2.m_Imag);
//}


//重载+号运算符(Complex,double)
//Complex operator+(Complex c1, double c2) {
//	return Complex(c1.m_Real + c2, c1.m_Imag + 0);
//}


void test01() {
	Complex c1(2,5),c2(2,-3),c3;
	/*c4 = Complex(2.3);*/
	//c3 = c1 + 2.3;

	//解决第一个问题
	//没类型转换函数，有转换构造函数，+号重载
	//第一个问题的根源，就是这里，如果这里用了默认无参构造函数，那么转换构造函数里的参数就不需要引用
	//Complex() {}
	//我的错误在于，省事然后直接在Complex(double real = 0 , double imag = 0)弄了默认参数，然而在转换构造函数的时候，
	//出现了重载现象，系统就不知道有转换构造函数这个东西，所以就不能进行2.3转换为对象。
	//所以在使用转换构造函数时，不要使用默认参数。
	//c3 = c1 + 2.3;
	//c3.display();


	//解决第二个问题
	//没类型转换函数，有转换构造函数和+号重载，对+号重载有两种方式，下面讨论的是用成员函数方式重载+号的话，就不能用引用
	//其实友元函数方式也不能用引用方式，因为临时变量是没有别名一说的
	//Complex& Complex::operator+(Complex c)  我的错误是参数里面用了(Complex &c)；
	//那这里我就不清楚为什么不能用引用了。哈哈
	//2.3是临时对象是没有别名的，所以不能将2.3以引用的方式，所以用成员函数方式进行+号重载的话，形参不能用引用，只能用值传递方式
	c3 = c1 + 2.3;
	c3.display(); 
	
	//c3 = c1 + 2.3;
	//c3.display();




	//解决第三个问题
	//含转换构造函数和类型转换函数，不包含+号重载的话，就会出现下面的结果
	//这里是先将c1转换为double类型，在和2.3相加，结果为4.3然后再将4.3转换为Complex对象类型，
	// 最后把4.3转换的Complex对象赋值给c3对象，所以最后打印出来的结果是(4.3,0i)
	//c3 = c1 + 2.3;
	//c3.display();



	/*double d,d2;
	d = c1 + 5.5;
	d2 = 7.7 + c2;
	cout << d << endl;
	cout << d2 << endl;*/
}


int main() {

	test01();

	getchar();
	return 0;
}