//#include <iostream>
//using namespace std;
////timeϵͳʱ��ͷ�ļ�����
//#include <ctime>
//
//int main() {
//
//	//���һ����������ӣ��������õ�ǰϵͳʱ���������������ֹÿ���������һ��
//	srand((unsigned int)time(NULL));
//	
//	//1��ϵͳ���������
//	int num = rand() % 100 + 1;  //rand()%100 + 1 ���� 0+1~99+1 �����
//	cout << num << endl;
//
//	//2����ҽ��в²�
//	int val = 0;  //������������
//	while (1) {
//		cin >> val;
//
//		//3���ж���ҵĲ²�
//
//		if (val > num) {
//			cout << "�²����" << endl;
//		}
//		else if (val < num) {
//			cout << "�²��С!" << endl;
//		}
//		else {
//			cout << "��ϲ�㣡�¶��ˣ�" << endl;
//			break;
//		}
//	}
//	
//
//	//�¶�  �˳���Ϸ 
//	//�´�  ��ʾ�µĽ��  ������С  ���·��صڶ���
//
//	getchar();
//	return 0;
//}