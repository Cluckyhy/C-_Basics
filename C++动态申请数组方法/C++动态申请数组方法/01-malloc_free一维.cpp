//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
////动态开辟一维数组
//void dynamicOneArray() {
//	int i, m;
//	printf("请输入开辟的数组长度: ");
//	scanf("%d", &m);
//	int* p = (int*)malloc(sizeof(int) * m);
//	printf("请输入数据：");
//	for (int i = 0; i < m; i++) {
//		scanf("%d", p+i);
//	}
//	printf("输出数据：\n");
//	for (i = 0; i < m; i++) {
//		printf("%d ", *(p + i));
//	}
//	free(p);
//}
//
//
//
//int main() {
//
//	dynamicOneArray();
//
//	getchar();
//	return 0;
//}