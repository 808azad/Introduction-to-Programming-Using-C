#ifndef SDDS_POSAPP_H  // Header guard to prevent multiple inclusions
#define SDDS_POSAPP_H

#include "POS.h"  // Including the POS header file for the constants

struct Item
{
    char sku[MAX_SKU_LEN];  // SKU code for the item
    char name[61];          // Name of the item
    double price;           // Price of the item
    int taxed;              // Flag indicating if the item is taxed (1 for taxed, 0 for not taxed)
    int quantity;           // Quantity of the item
};

struct Item items[MAX_NO_ITEMS];  // Array of Item objects to store items
int noOfItems;                    // Total number of items

// Function prototypes
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
