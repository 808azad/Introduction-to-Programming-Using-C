#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


/*
A: 10
B: 22
C = A + B

B = A = C;
A and B are 30
A = 10
B = 4
C = A - 5
C is 6
C = A + 4
C = 14
C = A / B


C = A % B
% - RETURNS REMAINDER(ONLY FOR INT) 
C = B % 2

C = A > B
C = A == B


>
<
>=
<=
==
!=



1. C = A && B
(IF A AND B IS GREATER THAT 0, C = 1
ELSE, C = 0)

2. C = A || B
(IF A OR B OR BOTH IS 1, C = 1;
ELSE, C = 0)

3. !A
(WHATEWER A IS, 
THE OTHER VALUE IS OPPOSITE)









*/


void hello(void);


int main(void){
	/*int num = 0;
	while (num < 3) {
		printf("%d: ", num);
		hello();
		//num = num + 1;
		num++;
	}*/


	int i;

	i = 0;
	while (i < 3){
		printf("Hello!\n");
		i++;
	}

	for (i = 0; i < 3; i++) {
		printf("Hello!\n");
	}











	return 0;

}

void hello(void){
	printf("Hello World\n");
}