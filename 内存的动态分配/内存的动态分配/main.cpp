#include <iostream>
using namespace std;


int main() {
	float* sales, total = 0, average;
	int numDays, count;

	cout << "你希望处理几天的销售量？";
	cin >> numDays;
	sales = new float[numDays];
	if (NULL==sales) {
		cout << "分配内存空间失败！" << endl;
		exit(0);
	}
	cout << "请输入如下的销售量：" << endl;
	for (count = 0; count < numDays;count++) {
		cout << "第" << (count + 1) << "天：" << endl;
		cin >> sales[count];
	}
	for (count = 0; count < numDays;count++) {
		total += sales[count];
		average = total / numDays;
		cout.precision(2);
		cout.setf(ios::fixed | ios::showpoint);
	}
	cout << "\n总的销售量：" << total << endl;
	cout << "平均销售量：" << average << endl;
	delete[] sales;
	return 0;
}