#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "PosApp.h"

// Displays the menu options and retrieves the user's selection
int menu(void) {
	printf("1- Inventory\n"
		"2- Add item\n"
		"3- Remove item\n"
		"4- Stock item\n"
		"5- POS\n"
		"0- exit program\n"
		"> ");

	return getMMInt(0, 5, "Selection");
}

// Runs the Point of Sale (POS) system
void runPos(const char filename[]) {
	int done = 0;
	int selValue = 0;

	// Load items from a file
	loadItems(filename);
	printf("The Sene-Store\n");

	while (done != 1) {
		selValue = menu();
		switch (selValue) {
		case 1:
			// View inventory
			inventory();
			printf("The Sene-Store\n");
			break;
		case 2:
			// Add an item
			addItem();
			printf("The Sene-Store\n");
			break;
		case 3:
			// Remove an item
			removeItem();
			printf("The Sene-Store\n");
			break;
		case 4:
			// Stock an item
			stockItem();
			printf("The Sene-Store\n");
			break;
		case 5:
			// Perform a Point of Sale transaction
			POS();
			printf("The Sene-Store\n");
			break;
		default:
			// Save items to a file and exit the program
			saveItem(filename);
			printf("Goodbye!");
			done = 1;
			break;
		}
	}
}
