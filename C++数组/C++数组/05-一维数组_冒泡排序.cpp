//#include <iostream>
//using namespace std;
//
//
//int main() {
//
//	//ð�������㷨
//	//����һ����������
//	int arr[9] = { 12,2,56,3,7,22,11,35,4 };
//	int length = sizeof(arr) / sizeof(arr[0]);
//	//����δ����ǰ
//	for (int i = 0; i < 9; i++) {
//		cout << arr[i]<<" ";
//	}
//	cout << endl;
//	//ʵ��ð�������㷨
//	//�ܹ���������Ϊ Ԫ�ظ���-1��
//	for (int j = 0; j < length-1; j++) {
//		//�ڲ�ѭ���Ա�  ���� = Ԫ�ظ��� - ��ǰ���� - 1��
//		for (int i = 0; i < length-j-1; i++) {
//			//�����һ�����ȵڶ������󣬽�����������
//			if (arr[i] > arr[i + 1]) {
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//	}
//	//���ð�������
//	for (int i = 0; i < 9; i++) {
//		cout << arr[i]<<" ";
//	}
//
//
//	getchar();
//	return 0;
//}