/*

Student name: Azad Zeynalov
Email: azeynalov1@matrix.senecacollege.ca
ID: 112217229
-----------------------------------------------------------
I have done all the coding by myself and only copied the code
that my professor provided to complete my project milestones.
-----------------------------------------------------------
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "PosApp.h"
#include "utils.h"


// Calculates the Total Asset Value (TAV) of all items
double tav(void) {
    int i;
    double tav = 0;
    for (i = 0; i < noOfItems; i++) {
        tav = tav + (cost(&items[i]) * (double)items[i].quantity);
    }
    printf("                               Total Asset: $  |       %.2lf |\n", tav);
    printf("-----------------------------------------------^---------------^");
    return tav;
}

// Displays the inventory of items
void inventory(void) {
    printf(">>>> List Items...\n");
    listItems();
    tav();
    printf("\n");
}

// Adds a new item to the inventory
void addItem() {
    printf(">>>> Adding Item...\n");
}

// Removes an item from the inventory
void removeItem() {
    printf(">>>> Remove Item...\n");
}

// Stocks an existing item in the inventory
void stockItem() {
    printf(">>>> Stock Items...\n");
}

// Performs the Point of Sale operation
void POS() {
    printf(">>>> Point Of Sale...\n");
}

// Loads items from a file into the inventory
int loadItems(const char filename[]) {
    printf(">>>> Loading Items...\n");

    FILE* fptr;
    fptr = fopen(filename, "r");
    if (fptr != NULL) {
        noOfItems = 0;
        while (fscanf(fptr, "%[^,],%[^,],%lf,%d,%d", items[noOfItems].sku, items[noOfItems].name,
            &items[noOfItems].price, &items[noOfItems].taxed, &items[noOfItems].quantity) == 5) {
            while (fgetc(fptr) != '\n');
            noOfItems++;
        }
    }
    fclose(fptr);
    printf(">>>> Done!...\n");
    return noOfItems;
}

// Saves items from the inventory to a file
void saveItem(const char filename[]) {
    printf(">>>> Saving Items...\n");
}

// Calculates the cost of an item including tax
double cost(const struct Item* item) {
    return item->price * (1 + item->taxed * TAX);
}

// Lists all the items in the inventory
void listItems(void) {
    int i;
    char iName[19];
    printf(" %-4s| %-6s | %-18s | %-6s|%-2s | %-3s |   %-6s|\n", "Row", "SKU", "Item Name", "Price", "TX", "Qty", "Total");
    printf("-----|--------|--------------------|-------|---|-----|---------|\n");
    for (i = 0; i < noOfItems; i++) {
        strncpy(iName, items[i].name, 18);

        printf("%4d | %6.6s | %-18.18s | %5.2lf | %1c | %3d |  %6.2lf |\n", i + 1, items[i].sku, iName, items[i].price,
            (items[i].taxed == 1) ? 'T' : ' ', items[i].quantity, cost(&items[i]) * (double)items[i].quantity);

    }
    printf("-----^--------^--------------------^-------^---^-----^---------^\n");
}

//Displays the information of an item in a formatted bill format.
double billDisplay(const struct Item* item){
    char temp[15];
    strncpy(temp, item->name, 14);
    printf("| %-14.14s| %9.2lf | %s |\n", temp, cost(item), (item->taxed == 1) ? "Yes" : "   ");
    return cost(item);
}

//Displays various details of an item, including its name, SKU, price, price including tax (if applicable), and stock quantity.
void display(const struct Item* items){
    printf("=============v\n");
    printf("Name:        %s\n", items->name);
    printf("Sku:         %s\n", items->sku);
    printf("Price:       %.2lf\n", items->price);
    if (items->taxed == 1){
        printf("Price + tax: %.2lf\n", cost(items));
    }
    else{
        printf("Price + tax: %s\n", "N/A");
    }
    printf("Stock Qty:   %d\n", items->quantity);
    printf("=============^\n");
}

