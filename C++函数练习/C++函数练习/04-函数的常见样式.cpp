#include <iostream>
using namespace std;

//�����ĳ�����ʽ
//1���޲��޷�
void test01() {
	cout << "this is test01;" << endl;
}
//2���޲��з�
int test02() {
	cout << "this is test02;"<< endl;
	return 100;
}
//3���в��޷�
void test03(int a) {
	cout << "this is test03 a = ;" << a <<endl;
}
//4���в��з�
int test04(int a) {
	cout << "this is test04 a =" << a << endl;
	return a*2;
}
int main04(){
	//�޲����޷���������
	test01();
	//�޲��з���������
	int num = test02();
	cout << "num = " << num << endl;
	//�в��޷���������
	test03(200);
	//�в��з��ĺ�������
	int dounum = test04(5);
	cout << "a ������Ϊ�� " << dounum << endl;
	getchar();
	return 0;
}