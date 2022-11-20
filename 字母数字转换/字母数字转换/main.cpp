#include <iostream>
using namespace std;
char* p1, * p2;
void chgStr(char* p1, char* p2) {
	for (; *p1 != '\0'; p1++, p2++) {
		if (*p1 >= 65 && *p1 <= 90) {
			*p2 = *p1 + 32;
		}
		else if (*p1 >= 97 && *p1 <= 122) {
			*p2 = *p1 - 32;
		}
		else if (*p1 >= 48 && *p1 <= 57) {
			*p2 = 48 - (*p1) + 57;
		}
		else {
			*p2 = *p1;
		}
	}
	*p2 = '\0';
}

int main() {
	char str1[] = "dshGYUF+fdJJ=45?OK";
	char str2[50];
	chgStr(str1, str2);
	cout << str2 << endl;
	getchar();
	return 0;
}