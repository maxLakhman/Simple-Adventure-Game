#include <ncurses.h>
#include "story.h"

//Displays the scenario and options to the user depending on the current node/ Index
void displayNode(Node *story, int index) {
  if (story == NULL) {
    mvprintw(0, 0, "ERROR: Story not loaded.");
    return;
  }

  if (index < 0) {
    mvprintw(0, 0, "ERROR: Invalid story index.");
    return;
  }

  clear();  // Clear screen for fresh display
  mvprintw(0, 0, "%s", story[index].desc);

  if (story[index].opt1 != NULL) mvprintw(2, 0, "1. %s", story[index].opt1);
  if (story[index].opt2 != NULL) mvprintw(3, 0, "2. %s", story[index].opt2);

  mvprintw(5, 0, "(Press 1 or 2 to choose, 'i' for inventory, 'q' to quit, TAB to save)");
}

//Inputs:
//index = current node
//choice = the number the user typed in
//Output:
//The updated current node after the user choice
int getNext(Node *story, int index, int choice) {
  int next = index;

  if (choice == 1) next = story[index].next1;
  else if (choice == 2) next = story[index].next2;

  // Optional: prevent invalid navigation
  if (next < 0) return -1;
  return next;
}

