#include <string.h>
#include <ncurses.h>
#include "inventory.h"

void initInventory(Inventory *inv) {
  inv->size = 0;
  // Optionally clear all item slots
  for (int i = 0; i < MAX_ITEMS; i++) {
    inv->items[i][0] = '\0'; // mark each slot as empty
  }
}

int addItem(Inventory *inv, const char *itemName) {
  if (inv->size >= MAX_ITEMS) {
    return 0; // Inventory full
  }
  strncpy(inv->items[inv->size], itemName, MAX_ITEM_NAME - 1);
  inv->items[inv->size][MAX_ITEM_NAME - 1] = '\0'; // ensure null-termination
  inv->size++;
  return 1; // Successfully added
}

void showInventory(Inventory *inv) {
  clear();
  mvprintw(0, 0, "Inventory:");
  if (inv->size == 0) {
    mvprintw(1, 0, "(empty)");
  } else {
    for (int i = 0; i < inv->size; i++) {
      mvprintw(i + 1, 0, "- %s", inv->items[i]);
    }
  }
  mvprintw(inv->size + 2, 0, "Press any key to return.");
  refresh();
  getch();
}

int verifyItem(Inventory *inv, const char *itemName){
  for (int i = 0; i<inv->size; i++){
    if (strcmp(inv->items[i], itemName) == 0) {
      return 1; // Match found
    }
  }
  return 0;
}
