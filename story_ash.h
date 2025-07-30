#ifndef STORY_ASH_H
#define STORY_ASH_H

#include "story.h"  // for Node struct

extern Node ash_story[];
extern int ash_story_length;

// Declare the item_at_node array does it matter if this same declaration is in story_cat?
extern const char *item_at_node[];
extern const size_t item_at_node_length;

#endif
