#include <stdio.h>
#include <ncurses.h>
#include <string.h>
#include "story.h"
#include "story_utils.h"
#include "inventory.h"
#include "stdlib.h"
#include "story_ash.h"
#include "story_cat.h"

int main() {
  int current = 0;           //represents the current node
  int running = 0;           //indicates if the game is running
  Inventory playerInventory;
  Node *story = NULL;        //The story the user chooses
  int story_length = 0;
  FILE *file;                //The file that the save data is stored at    
  char buffer[10];           //The buffer that reads the save data
  char story_name[4];

  initInventory(&playerInventory);
  initscr();
  noecho();
  cbreak();
  keypad(stdscr, TRUE);

  //This implements the main menu
  while (!running){
    clear();
    mvprintw(0, 0, "Welcome to the main menu. \n Press 1 to start a horror story, 2 to start a silly story, or enter to resume your old game. H to see the controls.");
    refresh();

    int input = getch();
    switch(input){
    case '\n': //if they hit enter, they are trying to load the game
      running = 1;
      file = fopen("savedata.txt", "r");
      if (file == NULL) {
        perror("Error opening file");
        return 1;
      }
      while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
      }     
      current = atoi(buffer);
      fclose(file);
      break;
    case '1': //if they choose the first story
      story = ash_story;
      story_length = ash_story_length;
      strcpy(story_name, "ash");
      running = 1;
      break;
    case '2': //if they choose the second story
      story = cat_story;
      story_length = cat_story_length;
      strcpy(story_name, "cat");
      running = 1;
      break;
    case 'h':
      clear();
      mvprintw(0, 0, "Controls:\n");
      mvprintw(1, 0, "1 / 2 - Choose an option\n");
      mvprintw(2, 0, "i - Open inventory\n");
      mvprintw(3, 0, "TAB - Save game\n");
      mvprintw(4, 0, "q - Quit\n");
      mvprintw(6, 0, "Press any key to return to menu...");
      refresh();
      getch();
      break;
  }

  //While loop contains the main game loop, displays the text on screen 
  //Also reads the user input
  while (running) {
    clear();
    displayNode(story, current);
    refresh();

    FILE *file_pointer;
    char file_path[] = "savedata.txt"; // Replace with your file path
    int input = getch();

    switch (input) {
    case '1':
      mvprintw(10, 0, "DEBUG: current = %d", current);
      mvprintw(11, 0, "DEBUG: story_length = %d", story_length);
      current = getNext(story, current, 1);
      break;
    case '2':
      current = getNext(story, current, 2);
      break;
    case 'i':
      showInventory(&playerInventory);
      break;
    case 'q':
      running = 0;
      break;
    case '\t':
      //tab character means the user wants to save the game
      file_pointer = fopen(file_path, "w"); // Open the file in write mode

      if (file_pointer == NULL) {
        printf("Error opening the file.\n");
        return 1; // Indicate an error
      }
      
      char name_buffer[4];
      sprintf(name_buffer, "%s", story_name);
      fputs(name_buffer, file_pointer);

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

