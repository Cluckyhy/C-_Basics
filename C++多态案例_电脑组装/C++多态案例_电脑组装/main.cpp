#include <iostream>
using namespace std;

//�����ÿ���������
//CPU��
class CPU {
public:
	//����ļ��㺯��
	virtual void calculate() = 0;
};
//�Կ���
class VideoCard {
public:
	//�������ʾ����
	virtual void display() = 0;
};
//�洢��
class Memory {
public:
	//����Ĵ洢����
	virtual void storage() = 0;
};
//������
class Computer {
private:
	CPU* m_Cp;
	VideoCard* m_Vc;
	Memory* m_Me;
public:
	Computer(CPU *cp,VideoCard *vc,Memory *me) {
		m_Cp = cp;
		m_Vc = vc;
		m_Me = me;
	}
	void work() {
		m_Cp-> calculate();
		m_Vc->display();
		m_Me->storage();
	}
	~Computer() {
		//�ͷ�CPU���
		if (m_Cp != NULL) {
			delete m_Cp;
			m_Cp = NULL;
		}
		//�ͷ��Կ����
		if (m_Vc != NULL) {
			delete m_Vc;
			m_Vc = NULL;
		}
		//�ͷŴ洢�����
		if (m_Me != NULL) {
			delete m_Me;
			m_Me = NULL;
		}
	}
};

//���Բ���Inter
class InterCPU : public CPU {
public:
	void calculate() {
		cout << "Inter��CPU��ʼ������" << endl;
	}
};
class InterVideoCard : public VideoCard {
public:
	void display() {
		cout << "Inter���Կ���ʼ��ʾ��" << endl;
	}
};
class InterMemory : public Memory {
public:
	void storage() {
		cout << "Inter�Ĵ洢����ʼ�洢��" << endl;
	}
};

//���Բ���Lenove
class LenoveCPU : public CPU {
public:
	void calculate() {
		cout << "Lenove��CPU��ʼ������" << endl;
	}
};
class LenoveVideoCard : public VideoCard {
public:
	void display() {
		cout << "Lenove���Կ���ʼ��ʾ��" << endl;
	}
};
class LenoveMemory : public Memory {
public:
	void storage(){
		cout << "Lenove�Ĵ洢����ʼ�洢��" << endl;
	}
};


void test01() {
	InterCPU *icp = new InterCPU;
	InterVideoCard* ivc = new InterVideoCard;
	InterMemory* ime = new InterMemory;
	//��һ̨����
	Computer* cp1 = new Computer(icp, ivc, ime);
	cp1->work();
	delete cp1;
	cout << "------------------------" << endl;
	//�ڶ�̨����
	Computer *cp2 = new Computer(new LenoveCPU, new LenoveVideoCard, new LenoveMemory);
	cp2->work();
	delete cp2;
	cout << "------------------------" << endl;
	//����̨����
	Computer *cp3 = new Computer(new LenoveCPU, new InterVideoCard, new LenoveMemory);
	cp3->work();
	delete cp3;
}



int main() {

	test01();

	getchar();
	return 0;
}