#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>








int getInt();
void flushKey();
int yes(void);




int getInt(void) {
    int value;
    int matches = scanf("%d", &value);
    char c = getchar();
    while (matches != 1 || c != '\n') {
        flushKey();
        if (matches != 1) {
            printf("Invalid Integer, try again: ");
        }
        else {
            printf("Enter only an integer, try again: ");
        }
        matches = scanf("%d", &value);
        c = getchar();
    }
    return value;
}

void flushKey() {
    char ch = 'x';
    while (ch != '\n') {
        ch = getchar();
    }
}





int yes(void) {
	int res;
	char resp;
	printf("(Y)es or (N)o: ");
	resp = getchar();
	if (resp == 'Y' || resp == 'y') {
		res = 1;
	}
	else {
		res = 0;
	}
	return res;
}


