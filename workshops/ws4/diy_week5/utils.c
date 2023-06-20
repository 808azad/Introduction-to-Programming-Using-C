#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//some functions from utils module implemented in workshop 3 
void flushKey() {
    char ch = 'x';
    while (ch != '\n') {
        ch = getchar();
    }
}