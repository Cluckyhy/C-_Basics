#include <iostream>
using namespace std;

//Animal���ڲ��ṹ
//vfptr  <---->  �麯��(��)ָ��
//vfptr ָ�� vftable(�麯����)
//v -- virtual
//f -- function
//ptr -- pointer


class Animal {
public:
	
	virtual void speak() {
		cout << "������˵��" << endl;
	}
	virtual void can() {
		cout << "�һ��" << endl;
	}
};


//Cat���ڲ��ṹ
//�̳��˸����vfptr������ָ����������麯����
//������û����д������麯���Ļ����麯�������ŵĻ��Ǹ����Animal::speak
//һ��������д�������������麯�����е����ݽ��и��ǲ��������滻��������麯����ַ��--Cat::speak�滻Animal::speak


class Cat :public Animal {
public:
	void speak() {
		cout << "Сè��˵��" << endl;
	}
	void can() {
		cout << "�һ�������" << endl;
	}
};
void DoSpeak(Animal &ani) {
	ani.speak();
}

int main() {

	//û��virtualǰ��Animal���ǿ��࣬����Ĵ�СΪ 1
	//cout << "sizeof(Animal) = " << sizeof(Animal);
	//����virtal��Animal��Ĵ�СΪ 4	--�������һ��ָ��ռ4���ֽ�
	cout << "sizeof(Animal) = " << sizeof(Animal);

	getchar();
	return 0;
}