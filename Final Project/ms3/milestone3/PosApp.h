#ifndef SDDS_POSAPP_H
#define SDDS_POSAPP_H
#include "POS.h"
//
struct Item
{
	char sku[MAX_SKU_LEN];
	char name[61];
	double price;
	int taxed;
	int quantity;
};

struct Item items[MAX_NO_ITEMS];
int noOfItems;

void listItems(void);
void inventory();
void addItem();
void removeItem();
void stockItem();
void POS();
int loadItems(const char filename[]);
void saveItems(const char filename[]);
double cost(const struct Item* item);
double billDisplay(const struct Item* item);
void display(const struct Item* items);
#endif // !SDDS_POSAPP_H
