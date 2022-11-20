#include <iostream>
using namespace std;
template <typename T>
T sum(T num1, T num2, T num3) {
	T result = num1 + num2 + num3;
	return result;
}

int main04() {
	int a = 1, b = 2, c = 3;
	float d = 1.123, e = 56.45, f = 8.22;
	double g = 2.123, h = 99.56, u = 22.34;
	int result_int = sum(a, b, c);
	float result_float = sum(d, e, f);
	double result_double = sum(g, h, u);
	cout << "整型数据相加为：" << result_int << endl;
	cout << "浮点型数据相加为：" << result_float << endl;
	cout << "Double型数据相加为：" << result_double << endl;
	getchar();
	return 0;
}