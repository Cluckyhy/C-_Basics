#include <iostream>
using namespace std;

void getChoice(char &);
double calcWeeklyPay(int,double);
double calcWeeklyPay(double);

int main() {
	char selection;
	int worked;
	double rate, yearly;
	cout << "请输入计算工资的方式：" << endl;
	cout << "(H)计算计时工资" << endl;
	cout << "(S)计算员工的工资" << endl;
	getChoice(selection);
	switch (selection) {
	case 'H':
	case 'h':
		cout << "已经工作多少小时？"; cin >> worked;
		cout << "每小时的报酬是多少？"; cin >> rate;
	}
	return 0;
}
void getChoice(char &letter) {
	do {
		cout << "请输入你的选择H或S" << endl;
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