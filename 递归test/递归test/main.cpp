#include <iostream>
using namespace std;
long recursion(int n);

int main() {
	int n;
	int result;
	cout << "������һ������" << endl;
	cin >> n;
	result = recursion(n);
	cout << "������������Ľײ�Ϊ��" << result << endl;
	return 0;
}
long recursion(int n){
	long temp_result;
	if (n<0) {
		cout << "���������������" << endl;
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