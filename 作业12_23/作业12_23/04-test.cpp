//#include <iostream>
//using namespace std;
//
////��̬����10��int�����飬��ֵ�����
//
//
//int main() {
//
//	int* ptr = new int[10];
//	int* temp = ptr;
//	cout << "������10������" << endl;
//	for (; ptr < (temp + 10); ptr++) {
//		cin >> *ptr;
//	}
//	/*for (int i = 0; i < 10; i++) {
//		cin >> *(ptr + i);
//	}*/
//	ptr = temp;
//	for (int i = 0; i < 10; i++) {
//		cout << *(ptr + i)<<" ";
//	}
//	delete[] ptr;
//
//	getchar();
//	return 0;
//}