//#include <iostream>
//using namespace std;
//
//
//int main() {
//
//	//��ά����������;
//
//	//1�����Բ鿴����ռ�ÿռ��С
//	int arr[2][4] = {
//		{1,2,3,9},
//		{4,8,6,10}
//	};
//	cout << "��ά����ռ���ڴ�ռ�Ϊ��"<<sizeof(arr) << endl;
//	cout << "��ά�����һ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0]) << endl;
//	cout << "��ά�����һ��Ԫ��ռ���ڴ�ռ�Ϊ��" << sizeof(arr[0][0]) << endl;
//
//	cout << "��ά��������Ϊ��" << sizeof(arr) / sizeof(arr[0]) << endl;
//	cout << "��ά��������Ϊ��" << sizeof(arr[0]) / sizeof(arr[0][0]);
//
//	//2�����Բ鿴��ά������׵�ַ
//	cout << "��ά������׵�ַΪ��" << (int)arr << endl;
//	cout << "��ά�����һ���׵�ַΪ��" << (int)arr[0] << endl;
//	cout << "��ά����ڶ����׵�ַΪ��" << (int)arr[1] << endl;
//	cout << "��ά����ĵ�һ��Ԫ�صĵ�ַΪ��" << (int)&arr[0][0] << endl;
//	cout << "��ά����ĵڶ���Ԫ�صĵ�ַΪ��" << (int)&arr[0][1] << endl;
//
//	getchar();
//	return 0;
//}