#ifndef INVENTORY_H
#define INVENTORY_H

#define MAX_ITEMS 10
#define MAX_ITEM_NAME 50

typedef struct {
  char items[MAX_ITEMS][MAX_ITEM_NAME];
  int size;
} Inventory;

void initInventory(Inventory *inv);
int addItem(Inventory *inv, const char *itemName);  // returns 1 if added, 0 if full
void showInventory(Inventory *inv);

#endif
