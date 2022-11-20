#include <iostream>
using namespace std;
//char* ip, * op;
void chgStr(char* pt, char* pt2) {
	for (; *pt != '\0'; pt++, pt2++) {
		if (*pt >= 65 && *pt <= 90) {
			*pt2 = *pt + 32;
		}
		else if (*pt >= 97 && *pt <= 122) {
			*pt2 = *pt - 32;
		}
		else if (*pt >= 48 && *pt <= 57) {
			*pt2 = 48 - *pt + 57;
		}
		else {
			*pt2 = *pt;
		}
	}
	*pt2 = '\0';
}
int main() {
	char pt[] = "fdsfer+465+IOP?OK";
	char pt2[50];
	chgStr(pt, pt2);
	cout << pt2 << endl;
	getchar();
	return 0;
}

