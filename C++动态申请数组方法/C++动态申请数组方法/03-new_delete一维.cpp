//#include <iostream>
//using namespace std;
//
////��̬���뿪��һά����ռ�
//
//void dynamicOneArray() {
//	int len;
//	cout << "������Ҫ���ٵĿռ��С" << endl;
//	cin >> len;
//	cout << "��������Ҫ�����ֵ" << endl;
//	int* ptr = new int[len];
//	//�������ݷ���һ
//	//int* temp = ptr;
//	//for (; ptr < (temp + len); ptr++) {
//	//	cin >> *ptr;
//	//}
//	//�������ݷ�����
//	for (int i = 0; i < len; i++) {
//		cin >> ptr[i];
//	}
//	
//	//������ݷ���һ
//	//cout << "���������Ϊ��" << endl;
//	//for (ptr = temp; ptr < (temp + len); ptr++) {
//	//	cout << *ptr <<" ";
//	//}
//	//������ݷ�����
//	cout << "���������Ϊ��" << endl;
//	for (int i = 0; i < len; i++) {
//		cout << ptr[i] << " ";
//	}
//
//	//�ͷſռ��С
//	delete[] ptr;
//}
//
//
//int main() {
//
//	dynamicOneArray();
//
//	getchar();
//	return 0;
//}