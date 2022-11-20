#include <iostream>
using namespace std;
long recursion(int n);

int main() {
	int n;
	int result;
	cout << "请输入一个整数" << endl;
	cin >> n;
	result = recursion(n);
	cout << "你输入的整数的阶层为：" << result << endl;
	return 0;
}
long recursion(int n){
	long temp_result;
	if (n<0) {
		cout << "你输入的整数有误！" << endl;
		return 0;
	}
	else if (n==0 || n==1) {
		temp_result = 1;
	}
	else {
		temp_result = n * recursion(n-1);
	}
	return temp_result;
}