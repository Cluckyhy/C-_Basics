#include <iostream>
using namespace std;

//����һ��Ҫע�⣺char*���͵��β�һ��Ҫ��ǰ�����const����Ϊ����֪����Ϊʵ�ε��ַ�����������ַ�����
//����Ϊ�����䣬C++�涨��char*�������βΣ���Ҫ��ǰ�����const����Ȼ�ᱨû��������б�ƥ��Ĺ��캯��


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

	//�����B�Ĺ��캯������B�Ĺ��캯���ֵ���A�Ĺ��캯�������classA�������B���캯��������classB��
	//�ٵ���C�Ĺ��캯������C�Ĺ��캯���ֵ���A�Ĺ��캯�������classC�������C���캯��������classD,
	//������D�Ĺ��캯����������ݣ����classD
	//��������������Ϊ
	//classA
	//classB
	//classC
	//classD
	//classD
	D d("classA", "classB", "classC", "classD");


	getchar();
	return 0;
}