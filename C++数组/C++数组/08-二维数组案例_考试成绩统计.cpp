#include <iostream>
using namespace std;
#include <string>


int main() {

	//��ά���鰸��-���Գɼ�ͳ��

	//1��������ά����
	int scores[3][3] = {
		{100,56,99},
		{88,77,46},
		{75,66,79}
	};

	string name[3] = { "����","����","���" };

	//2��ͳ��ÿ���˵��ܺͷ���
	for (int i = 0; i < 3;i++) {
		int sum = 0;  //ͳ�Ʒ����ܺͱ���
		for (int j = 0; j < 3; j++) {
			sum += scores[i][j];
			//cout << scores[i][j] << " ";
		}
		cout <<name[i]<<"���ܷ�Ϊ��" << sum << endl;
	}



	getchar();
	return 0;
}