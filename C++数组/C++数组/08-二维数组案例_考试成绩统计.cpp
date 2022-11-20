#include <iostream>
using namespace std;
#include <string>


int main() {

	//二维数组案例-考试成绩统计

	//1、创建二维数组
	int scores[3][3] = {
		{100,56,99},
		{88,77,46},
		{75,66,79}
	};

	string name[3] = { "张三","王五","甜妞" };

	//2、统计每个人的总和分数
	for (int i = 0; i < 3;i++) {
		int sum = 0;  //统计分数总和变量
		for (int j = 0; j < 3; j++) {
			sum += scores[i][j];
			//cout << scores[i][j] << " ";
		}
		cout <<name[i]<<"的总分为：" << sum << endl;
	}



	getchar();
	return 0;
}