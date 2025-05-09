#include <stdio.h>
#include <ncurses.h>
#include "story.h"

int main() {
  initscr();
  noecho();
  cbreak();
  keypad(stdscr, TRUE);

  int current = 0; //this is the current node
  int running = 0;

  //This implements the main menu
  while (!running){
    clear();
    mvprintw(0, 0, "Welcome to the main menu. Press space to start.");
    refresh();
    int input = getch();
    switch(input){
    case ' ':
      running = 1;
      break;
    }
  }

  //While loop contains the main game loop, displays the text on screen 
  //Also reads the user input
  while (running) {
    clear();
    displayNode(current);
    refresh();

    int input = getch();
    switch (input) {
    case '1':
      current = getNext(current, 1);
      break;
    case '2':
      current = getNext(current, 2);
      break;
    case 'q':
      running = 0;
      break;
    }

    // End if we hit an invalid or terminal node
    if (current == -1) {
      clear();
      mvprintw(0, 0, "The End. Press any key to quit.");
      refresh();
      getch();
      running = 0;
    }
  }

  endwin();
  return 0;
}

