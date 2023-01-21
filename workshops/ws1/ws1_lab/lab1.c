#include <stdio.h>

void title() {
	printf("IPC144 NBB\t");
	printf("Workshop1\t");
	printf("Part 1\n");		
}

void line() {
	printf("------------------------------------------------------------\n");
}

void info() {
	printf("Name:\n");
	printf("\tAzad Zeynalov\n");
	printf("tEmail:\n");
	printf("\tazeynalov1@myseneca.ca\n");


}

int main(void) {

	title();
	line();
	info();
	line();
	return 0;
}

