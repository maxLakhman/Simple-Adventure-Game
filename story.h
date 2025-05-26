#ifndef STORY_H
#define STORY_H

//The struct is used to bring format to each scenario the user can encounter
typedef struct {
  const char *desc;  //scenario for each situation here
  const char *opt1; //text options you can choose
  const char *opt2; 
  int next1;  //If you choose the first option, it takes you to this index in the story list
  int next2;  //If you choose the second option, it takes you to this index
} Node;

void displayNode(int index);
int getNext(int index, int choice);

#endif
