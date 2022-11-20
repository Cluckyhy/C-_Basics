#include <iostream>
using namespace std;

//这里一定要注意：char*类型的形参一定要在前面加上const，因为我们知道作为实参的字符串本身就是字符常量
//所以为了适配，C++规定，char*类型做形参，需要在前面加上const，不然会报没有与参数列表匹配的构造函数


class A {
public:
	A(const char* s) {
		cout << s << endl;
	}
};

class B : public A {
public:
	B(const char* s1, const char* s2) :A(s1) {
		cout << s2 << endl;
	}
};

class C : public A {
public:
	C(const char* s1, const char* s2) :A(s1) {
		cout << s2 << endl;
	}
};

class D : public B, public C {
public:
	D(const char* s1, const char* s2, const char* s3, const char* s4) : B(s1, s2), C(s3, s4) {
		cout << s4 << endl;
	}
};


int main() {

	//会调用B的构造函数，而B的构造函数又调用A的构造函数，输出classA，再输出B构造函数的内容classB，
	//再调用C的构造函数，而C的构造函数又调用A的构造函数，输出classC，再输出C构造函数的内容classD,
	//最后调用D的构造函数里面的内容，输出classD
	//所以最后的输出结果为
	//classA
	//classB
	//classC
	//classD
	//classD
	D d("classA", "classB", "classC", "classD");


	getchar();
	return 0;
}