#include <iostream>
using namespace std;


struct S1 {
	char a;
	long b;
}A = { 'a',2 };
struct S2 {
	char c;
	struct S1 d;
	long long e;
}B;




int main() {

	//Student s1;
	//s1.m_Age = 20;

	//cout << sizeof(p) << endl;

	char cc = 's';

	cout << &cc << endl;

	cout << (void*)&A.a << endl;
	printf("%p\n", &A.a);
	cout << &A.b << endl;
	cout << sizeof(struct S2) << endl;
	cout << sizeof(B) << endl;


	cout << (void*)&B.c << endl;
	//下面两句的值是相同的，S1的有效值是其成员字节数最大的字节
	cout << &B.d << endl;
	cout << (void*)&B.d.a << endl;

	cout << &B.d.b << endl;
	cout << &B.e << endl;



	getchar();
	return 0;
}