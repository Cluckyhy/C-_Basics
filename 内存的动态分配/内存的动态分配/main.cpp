#include <iostream>
using namespace std;


int main() {
	float* sales, total = 0, average;
	int numDays, count;

	cout << "��ϣ�����������������";
	cin >> numDays;
	sales = new float[numDays];
	if (NULL==sales) {
		cout << "�����ڴ�ռ�ʧ�ܣ�" << endl;
		exit(0);
	}
	cout << "���������µ���������" << endl;
	for (count = 0; count < numDays;count++) {
		cout << "��" << (count + 1) << "�죺" << endl;
		cin >> sales[count];
	}
	for (count = 0; count < numDays;count++) {
		total += sales[count];
		average = total / numDays;
		cout.precision(2);
		cout.setf(ios::fixed | ios::showpoint);
	}
	cout << "\n�ܵ���������" << total << endl;
	cout << "ƽ����������" << average << endl;
	delete[] sales;
	return 0;
}