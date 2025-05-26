#include <ncurses.h>
#include "story.h"

//Displays the scenario and options to the user depending on the current node/ Index
void displayNode(Node *story, int index) {
  mvprintw(0, 0, "%s\n", story[index].desc);
  if (story[index].opt1) mvprintw(2, 0, "1. %s", story[index].opt1);
  if (story[index].opt2) mvprintw(3, 0, "2. %s", story[index].opt2);
  mvprintw(5, 0, "(Press q to quit)");
}

//Inputs:
//index = current node
//choice = the number the user typed in
//Output:
//The updated current node after the user choice
int getNext(Node *story, int index, int choice) {
  if (choice == 1) return story[index].next1;
  if (choice == 2) return story[index].next2;
  return index;
}
