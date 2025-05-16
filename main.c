#include <stdio.h>
#include <ncurses.h>
#include "story.h"
#include "inventory.h"

int main() {
  initscr();
  noecho();
  cbreak();
  keypad(stdscr, TRUE);

  int current = 0; //this is the current node
  int running = 0;

  Inventory playerInventory;
  initInventory(&playerInventory);

  //This implements the main menu
  while (!running){
    clear();
    mvprintw(0, 0, "Welcome to the main menu. Press enter to start a new game, and space to resume your old game.");
    refresh();
    int input = getch();
    switch(input){
    case ' ':
      running = 1;
      break;
    case '\n':
      running = 1;
      current = 3;
      break;
  }

  //While loop contains the main game loop, displays the text on screen 
  //Also reads the user input
  while (running) {
    clear();
    displayNode(current);
    refresh();

    FILE file_pointer;
    char file_path[] = "example.txt"; // Replace with your file path

    int input = getch();
    switch (input) {
    case '1':
      current = getNext(current, 1);
      break;
    case '2':
      current = getNext(current, 2);
      break;
    case 'i':
      showInventory(&playerInventory);
      break;
    case 'q':
      running = 0;
      break;
    case '\t':
      //What if the user wants to save the game
      file_pointer = fopen(file_path, "w"); // Open the file in write mode

      if (file_pointer == NULL) {
        printf("Error opening the file.\n");
        return 1; // Indicate an error
      }
      
      //Since the buffer is a fixed size, what happens if the current node is larger or too large for the buffer
      char buffer[3]; 
      sprintf(buffer, "%d", current);

      fputs(buffer, file_pointer);
      
      fclose(file_pointer); // Close the file

      printf("File content cleared successfully.\n");
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
  }}

