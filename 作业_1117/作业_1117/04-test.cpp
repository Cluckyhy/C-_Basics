#include <iostream>
using namespace std;

//3���Ը��������ת�����캯������double��ת���ɸ�������
//   �������ת��������double�����أ���Ӽӷ����غ����������в��ԡ�

//�ҵ�����
//��һ��Ϊʲôת�����캯������Ĳ���Ҫ�����ò����ã�ת�����캯��������double û�����þͻᱨ��
//�ڶ���Ϊʲôֻ������Ԫ�����ķ�ʽ����+�����ز����ã��ó�Ա�����ķ�ʽ�Ͳ���
//������������ת����������ô�������(4.3,0i)�����Ľ��


class Complex {
private:

	double m_Real;
	double m_Imag;
	
public:
	//friend Complex operator+(Complex c1, Complex c2);
	//����д������ʱ����û�б��������ܴ����ý���
	//friend Complex operator+(Complex& c1, Complex& c2);
	//friend Complex operator+(Complex c1, double c2);

	//��һ������ĸ�Դ��������������������Ĭ���޲ι��캯������ôת�����캯����Ĳ����Ͳ���Ҫ����
	Complex() {}

	//����ʾ�������һ�����⣬�����Conplexx(double& b);����ʹ�õĻ�
	//Complex(double real = 5, double imag = 6);
	Complex(double real, double imag);
	//ת�����캯��
	//explicit Complex(double b);
	Complex(double b);
	//����ת����������double�����ء�
	//operator double();
	//�ӷ����غ���
	Complex& operator+(Complex c);
	//��ӡ���
	void display() {
		cout << "(" << m_Real << "," << m_Imag << "i)" << endl;
	}
};
Complex::Complex(double real, double imag) {
	m_Real = real;
	m_Imag = imag;
}

//ת�����캯��
Complex::Complex(double b) {
	m_Real = b;
	m_Imag = 0;
}


//��Ա��������+��
Complex& Complex::operator+(Complex c) {
	Complex c3;
	c3.m_Real = m_Real + c.m_Real;
	c3.m_Imag = m_Imag + c.m_Imag;
	return c3;
}


//����ת������
//Complex::operator double() {
//	/*cout << m_Real << endl;
//	cout << m_Imag << endl;*/
//	return m_Real;
//}


//����+�������(Complex,Complex)
//Complex operator+(Complex c1, Complex c2) {
//	return Complex(c1.m_Real + c2.m_Real, c1.m_Imag + c2.m_Imag);
//}


//����+�������(Complex,double)
//Complex operator+(Complex c1, double c2) {
//	return Complex(c1.m_Real + c2, c1.m_Imag + 0);
//}


void test01() {
	Complex c1(2,5),c2(2,-3),c3;
	/*c4 = Complex(2.3);*/
	//c3 = c1 + 2.3;

	//�����һ������
	//û����ת����������ת�����캯����+������
	//��һ������ĸ�Դ��������������������Ĭ���޲ι��캯������ôת�����캯����Ĳ����Ͳ���Ҫ����
	//Complex() {}
	//�ҵĴ������ڣ�ʡ��Ȼ��ֱ����Complex(double real = 0 , double imag = 0)Ū��Ĭ�ϲ�����Ȼ����ת�����캯����ʱ��
	//��������������ϵͳ�Ͳ�֪����ת�����캯��������������ԾͲ��ܽ���2.3ת��Ϊ����
	//������ʹ��ת�����캯��ʱ����Ҫʹ��Ĭ�ϲ�����
	//c3 = c1 + 2.3;
	//c3.display();


	//����ڶ�������
	//û����ת����������ת�����캯����+�����أ���+�����������ַ�ʽ���������۵����ó�Ա������ʽ����+�ŵĻ����Ͳ���������
	//��ʵ��Ԫ������ʽҲ���������÷�ʽ����Ϊ��ʱ������û�б���һ˵��
	//Complex& Complex::operator+(Complex c)  �ҵĴ����ǲ�����������(Complex &c)��
	//�������ҾͲ����Ϊʲô�����������ˡ�����
	//2.3����ʱ������û�б����ģ����Բ��ܽ�2.3�����õķ�ʽ�������ó�Ա������ʽ����+�����صĻ����ββ��������ã�ֻ����ֵ���ݷ�ʽ
	c3 = c1 + 2.3;
	c3.display(); 
	
	//c3 = c1 + 2.3;
	//c3.display();




	//�������������
	//��ת�����캯��������ת��������������+�����صĻ����ͻ��������Ľ��
	//�������Ƚ�c1ת��Ϊdouble���ͣ��ں�2.3��ӣ����Ϊ4.3Ȼ���ٽ�4.3ת��ΪComplex�������ͣ�
	// ����4.3ת����Complex����ֵ��c3������������ӡ�����Ľ����(4.3,0i)
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