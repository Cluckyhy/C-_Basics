#include <iostream>
using namespace std;

void getChoice(char &);
double calcWeeklyPay(int,double);
double calcWeeklyPay(double);

int main() {
	char selection;
	int worked;
	double rate, yearly;
	cout << "��������㹤�ʵķ�ʽ��" << endl;
	cout << "(H)�����ʱ����" << endl;
	cout << "(S)����Ա���Ĺ���" << endl;
	getChoice(selection);
	switch (selection) {
	case 'H':
	case 'h':
		cout << "�Ѿ���������Сʱ��"; cin >> worked;
		cout << "ÿСʱ�ı����Ƕ��٣�"; cin >> rate;
	}
	return 0;
}
void getChoice(char &letter) {
	do {
		cout << "���������ѡ��H��S" << endl;
		cin >> letter;
	} while ('H' != letter && 'h' != letter && 'S' != letter && 's' != letter); {
	}
}
double calcWeeklyPay(int hours,double Payrate) {
	return hours * Payrate;
}
double calcWeeklyPay(double annSalary) {
	return annSalary / 52.0;
}