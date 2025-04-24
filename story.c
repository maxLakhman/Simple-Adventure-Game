#include <stdio.h>
#include <ncurses.h>
#include "story.h"

//The struct is used to bring format to each scenario the user can encounter
typedef struct {
  const char *desc;  //scenario for each situation here
  const char *opt1; //text options you can choose
  const char *opt2; 
  int next1;  //If you choose the first option, it takes you to this index in the story list
  int next2;  //If you choose the second option, it takes you to this index
} Node;

Node story[] = {
  //Start of the story
  {"You wake to the sound of water dripping like a heartbeat. The air is thick here, and damp. You can't help but notice the stench of blood. \n You sit up and look at your surroundings. You're in a stone chamber, lit by a dying torch. You don't remember how you got here, but the name Charlie is written in your hand in blood", "Stand and search the room", "Call out for Charlie", 1, 2},

  {"You search the room. The walls are wet and cold. Your hand brushes something soft on the wall. A torn piece of a shirt. \n There's also a narrow crack in the wall, just wide enough to slip through.", "Enter it", "Take the torch and stay where you are", 3, 4},
  
  //Gen 2
  {"Your voice echoes in the chamber. 'Charlie?' For a moment, silence. Then, suddenly you hear footsteps. They're not running. They're dragging.", "Hide", "Search for a way out", 5, 6}
  
  {"You squeeze through the crack in the wall, scraping your arm on the jagged stone. You find yourself in a dark hallway. At the far end hangs a mirror. Its cracked but your reflection is whole and grinning ear to ear.", "Approach the mirror", "Look away and run down the hall", 7, 8},
  
  //Gen 3
  {"You lift the dying torch from the sconce. Shadows leap across the stone walls. The room is still, until you hear it: soft breathing, from just behind you. But when you spin around, there's no one there. The crack in the wall seems smaller now. Or is the room shrinking?","Press your ear to the wall", "Ignore it and sit down",},

  {"You slip behind a pile of crumbled stone and hold your breath. The dragging steps grow louder. A figure enters the room. Tall, thin, head lolling like its detached at the neck. It stops, it sniffs, then it smiles. Its voice sounds exactly like yours: 'Charlie is waiting for you'.", "Stay hidden", "Speak to the figure"},

  {"You fall asleep forever. The End.", NULL, NULL, -1, -1},
  {"You escape into the light. The End.", NULL, NULL, -1, -1}
};

//Displays the scenario and options to the user depending on the current node/ Index
void displayNode(int index) {
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
int getNext(int index, int choice) {
  if (choice == 1) return story[index].next1;
  if (choice == 2) return story[index].next2;
  return index;
}
