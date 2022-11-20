//#include <iostream>
//using namespace std;
//
//class Time {
//private:
//	int m_Minute;
//	int m_Sec;
//public:
//	Time(int m=0,int s=0) {
//		m_Minute = m;
//		m_Sec = s;
//	}
//	void display() {
//		cout << m_Minute << ":" << m_Sec << endl;
//	}
//	Time operator++();
//};
//
//Time Time::operator++() {
//	if (++m_Sec >= 60) {
//		m_Sec -= 60;
//		++m_Minute;
//	}
//	return *this;
//}
//
//int main() {
//
//	Time t1(34, 0);
//	for (int i = 0; i < 60; i++) {
//		++t1;
//		t1.display();
//	}
//
//	getchar();
//	return 0;
//}