#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "utils.h"
#include "PosApp.h"
//

int menu(void)
{
	printf("1- Inventory\n"
		   "2- Add item\n"
		   "3- Remove item\n"
		   "4- Stock item\n"
		   "5- POS\n"
		   "0- exit program\n"
		   "> ");

	return getMMInt(0, 5, "Selection");
}

void runPos(const char filename[])
{
	int done = 0;
	int selValue = 0;

	loadItems(filename);
	printf("The Sene-Store\n");

	while (done != 1)
	{
	   selValue = menu();
	   switch (selValue)
	   {
	        case 1:
			inventory();
			printf("The Sene-Store\n");
		        break;
		case 2:
			addItem();
			printf("The Sene-Store\n");  
			break;
		case 3:
			removeItem();
			printf("The Sene-Store\n");
			break;
		case 4:
			stockItem();
			printf("The Sene-Store\n");   
			break;
		case 5:
			POS();
			printf("The Sene-Store\n");   
			break;
	        default:
			saveItems(filename);
			printf("Goodbye!");
			done = 1;
		    break;
	   }
		
	}

}
	
