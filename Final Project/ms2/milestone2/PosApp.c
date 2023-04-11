#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "PosApp.h"
#include "utils.h"




void inventory(void) {
   printf(">>>> Inventory...\n");
   listItems();
   printf("\n");
}

void addItem() {
   printf(">>>> Adding Item...\n");
}

void removeItem() {
   printf(">>>> Remove Item...\n");
}

void stockItem() {
   printf(">>>> Stock Items...\n");
}

void POS() {
   printf(">>>> Point Of Sale...\n");
}

int loadItems(const char filename[]) {
   printf(">>>> Loading Items...\n");

   FILE* fptr;
   fptr = fopen(filename, "r");
   if(fptr != NULL) {
      noOfItems = 0;
      while(fscanf(fptr, "%[^,],%[^,],%lf,%d,%d", items[noOfItems].sku, items[noOfItems].name,
                   &items[noOfItems].price, &items[noOfItems].taxed, &items[noOfItems].quantity) == 5) {
         fflushKey(fptr);
         noOfItems++;
      }
   }
   fclose(fptr);
   printf(">>>> Done!...\n");
   return noOfItems;
}

void saveItem(const char filename[]) {
   printf(">>>> Saving Items...\n");
}

double cost(const struct Item* item) {
   return  item->price * (1 + item->taxed * TAX);
}

void listItems(void) {

   char iName[19];

   printf(" %-4s| %-6s | %-18s | %-6s|%-2s | %-3s |   %-6s|\n", "Row", "SKU", "Item Name", "Price", "TX", "Qty", "Total");
   printf("-----|--------|--------------------|-------|---|-----|---------|\n");
   for(int i = 0; i < noOfItems; i++) {
      strncpy(iName, items[i].name, 18);
      printf("%4d | %6s | %-18.18s |  %4.2lf | %1c | %3d |  %6.2lf |\n", i + 1, items[i].sku, iName, items[i].price,
             (items[i].taxed == 1) ? 'T' : ' ', items[i].quantity, cost(&items[i]) * (double)items[i].quantity);

   }

}