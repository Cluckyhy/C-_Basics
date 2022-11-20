#include <iostream>
using namespace std;

//抽象出每个零件的类
//CPU类
class CPU {
public:
	//抽象的计算函数
	virtual void calculate() = 0;
};
//显卡类
class VideoCard {
public:
	//抽象的显示函数
	virtual void display() = 0;
};
//存储类
class Memory {
public:
	//抽象的存储函数
	virtual void storage() = 0;
};
//电脑类
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
		//释放CPU零件
		if (m_Cp != NULL) {
			delete m_Cp;
			m_Cp = NULL;
		}
		//释放显卡零件
		if (m_Vc != NULL) {
			delete m_Vc;
			m_Vc = NULL;
		}
		//释放存储器零件
		if (m_Me != NULL) {
			delete m_Me;
			m_Me = NULL;
		}
	}
};

//电脑产商Inter
class InterCPU : public CPU {
public:
	void calculate() {
		cout << "Inter的CPU开始计算了" << endl;
	}
};
class InterVideoCard : public VideoCard {
public:
	void display() {
		cout << "Inter的显卡开始显示了" << endl;
	}
};
class InterMemory : public Memory {
public:
	void storage() {
		cout << "Inter的存储器开始存储了" << endl;
	}
};

//电脑产商Lenove
class LenoveCPU : public CPU {
public:
	void calculate() {
		cout << "Lenove的CPU开始计算了" << endl;
	}
};
class LenoveVideoCard : public VideoCard {
public:
	void display() {
		cout << "Lenove的显卡开始显示了" << endl;
	}
};
class LenoveMemory : public Memory {
public:
	void storage(){
		cout << "Lenove的存储器开始存储了" << endl;
	}
};


void test01() {
	InterCPU *icp = new InterCPU;
	InterVideoCard* ivc = new InterVideoCard;
	InterMemory* ime = new InterMemory;
	//第一台电脑
	Computer* cp1 = new Computer(icp, ivc, ime);
	cp1->work();
	delete cp1;
	cout << "------------------------" << endl;
	//第二台电脑
	Computer *cp2 = new Computer(new LenoveCPU, new LenoveVideoCard, new LenoveMemory);
	cp2->work();
	delete cp2;
	cout << "------------------------" << endl;
	//第三台电脑
	Computer *cp3 = new Computer(new LenoveCPU, new InterVideoCard, new LenoveMemory);
	cp3->work();
	delete cp3;
}



int main() {

	test01();

	getchar();
	return 0;
}