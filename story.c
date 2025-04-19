#include <stdio.h>
#include <ncurses.h>
#include "story.h"

typedef struct {
  const char *desc;
  const char *opt1;
  const char *opt2;
  int next1;
  int next2;
} Node;

Node story[] = {
  {"You wake up in a dark room.", "Search the room", "Go back to sleep", 1, 2},
  {"You find a hidden door.", "Enter it", "Ignore it", 3, 2},
  {"You fall asleep forever. The End.", NULL, NULL, -1, -1},
  {"You escape into the light. The End.", NULL, NULL, -1, -1}
};

void displayNode(int index) {
  mvprintw(0, 0, "%s\n", story[index].desc);
  if (story[index].opt1) mvprintw(2, 0, "1. %s", story[index].opt1);
  if (story[index].opt2) mvprintw(3, 0, "2. %s", story[index].opt2);
  mvprintw(5, 0, "(Press q to quit)");
}

int getNext(int index, int choice) {
  if (choice == 1) return story[index].next1;
  if (choice == 2) return story[index].next2;
  return index;
}
