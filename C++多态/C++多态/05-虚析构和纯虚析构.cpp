#include <iostream>
using namespace std;

//�������ʹ�������

class Animal {
public:
	Animal() {
		cout << "Animal�Ĺ��캯���ĵ���" << endl;
	}
	//���������������Խ������ָ���ͷ��������ʱ���ɾ�������
	//virtual ~Animal() {
	//	cout << "Animal�����������ĵ���" << endl;
	//}
	//��������	��Ҫ����ҲҪ��ʵ��
	//���˴�������֮�������Ҳ���ڳ����࣬�޷�ʵ��������
	virtual ~Animal() = 0;
	virtual void speak() = 0;
};

Animal::~Animal() {
	cout << "Animal����������������" << endl;
}

class Cat : public Animal {
public:
	Cat(string name) {
		cout << "Cat�Ĺ��캯���ĵ���" << endl;
		m_Name = new string(name);
	}
	virtual void speak() {
		cout << *m_Name << "Сè��˵��!" << endl;
	}
	~Cat() {
		if (m_Name != NULL) {
			cout << "Cat�����������ĵ���" << endl;
			delete m_Name;
			m_Name = NULL;
		}
	}
	string* m_Name;
};

void test01() {
	Animal* animal = new Cat("Tom");
	animal->speak();
	//�����ָ��������ʱ�򣬲�����������е�����������������������ж��������ԣ������ڴ�й¶�����
	delete animal;
}



int main() {

	test01();


	getchar();
	return 0;
}