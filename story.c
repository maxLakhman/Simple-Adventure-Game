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

  //Gen 2
  {"You search the room. The walls are wet and cold. Your hand brushes something soft on the wall. A torn piece of a shirt. \n There's also a narrow crack in the wall, just wide enough to slip through.", "Enter it", "Take the torch and stay where you are", 3, 4},
  
  {"Your voice echoes in the chamber. 'Charlie?' For a moment, silence. Then, suddenly you hear footsteps. They're not running. They're dragging.", "Hide", "Search for a way out", 5, 1},

  //Gen 3
  {"You squeeze through the crack in the wall, scraping your arm on the jagged stone. You find yourself in a dark hallway. At the far end hangs a mirror. Its cracked but your reflection is whole and grinning ear to ear.", "Approach the mirror", "Look away and run down the hall", 6, 7},
  
  {"You lift the dying torch from the sconce. Shadows leap across the stone walls. The room is still, until you hear it: soft breathing, from just behind you. But when you spin around, there's no one there. The crack in the wall seems smaller now. Or is the room shrinking?","Press your ear to the wall", "Ignore it and sit down", 8, 9},

  {"You slip behind a pile of crumbled stone and hold your breath. The dragging steps grow louder. A figure enters the room. Tall, thin, head lolling like its detached at the neck. It stops, it sniffs, then it smiles. Its voice sounds exactly like yours: 'Charlie is waiting for you'.", "Stay hidden", "Speak to the figure", 10, 11},

  //Gen 4
  {"You approach the mirror. Your reflection watches you, but not quite right. It blinks when you dont. It smiles before you do. Then it whispers, 'You're almost ready to remember'.", "Touch the mirror", NULL, 12 , -1},

  {"You tear your gaze from the mirror and bolt down the hall. The floor stretches beneath you, never ending, until it suddenly stops. You trip. Fall. You're back in the stone chamber, only this time, the mirror is already shattered. Blood drips from your hands. Charlie's name is carved into your arm. You scream, but no sound comes out. The silence answers you with a memory. The fire. The locked door. The pleads for help you didn't answer. You were never running from the mirror. Only from yourself.", NULL, NULL, -1, -1},

  {"blah blah my ear is to the wall", NULL, NULL, -1, -1},

  {"You ignored the torch and escape into the light. The End.", NULL, NULL, -1, -1},

  {"You press your body against the wall and hold your breath, trying to stay hidden from that ... thing. You notice a faint feeling of lightheadedness as the creature's head starts to seize like he's having a seizure. You hear a faint whispering sound that grows louder with the movements of his head. \"You killed me\" they seem to be saying, vowing revenge. You can't help but wonder if they're connected to whoever or whatever made this place.", NULL, NULL, -1, -1},

  {"The figure doesnt move. Just stands there in the flickering dark, half swallowed by shadow, head tilted like a marionette caught mid pull. \"Charlie is waiting for you\" they say again, slower this time, almost tender. You laugh, dry and broken. \"Charlies dead\" The figure steps closer. You cant move. \"Exactly\" They raise a pale, trembling hand, and something dangles from their fingers, a childs bracelet. Mudcaked. Familiar. \"He waited\".", NULL, NULL, -1, -1},

  {"You reach out and touch the glass. It's cold. Your reflection places its hand against yours, and you feel skin. Suddently, images flood your mind. A hallway on fire. A locked door. Charlie, \
screaming behind it. \n You weren't looking for Charlie, you were hiding from him. \n The mirror shatters. You're alone. No torch. No walls. Just the weight  of memory. And a voice, faint but cl\
ear: 'Now do you remember?' \n You do.", NULL, NULL, -1, -1},
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
