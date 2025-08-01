#include "story_ash.h"
#include <stdlib.h>

// Define the story nodes for "The Memory of Ash"
Node ash_story[] = {
  // Node 0 - Opening
  {"You wake up cold, lying on cracked stone. Gray ash drifts through the air like snow. The last thing you remember is the sound of screaming and a flash of brilliant light. Now there is only silence.", "Stand up slowly", "Call out for help", 1, 2},
    
  // Node 1 - Standing up
  {"Your legs shake as you rise. Around you stretch the ruins of what was once a great city. Twisted metal and broken glass catch the dim light filtering through the ash-filled sky. In the distance, you see a flickering red glow.", "Walk toward the red glow", "Search the nearby rubble", 3, 4},
    
  // Node 2 - Calling out
  {"Your voice echoes hollow through the wasteland. 'Hello? Is anyone there?' The only response is the whisper of settling ash. But then you hear it - footsteps, slow and deliberate, approaching from behind the collapsed building to your left.", "Hide behind debris", "Face the approaching sounds", 5, 6},
    
  // Node 3 - Walking toward glow
  {"The red glow grows brighter as you approach. It's a fire, crackling in what remains of a metal barrel. Huddled around it are three figures wrapped in tattered cloth. They look up as you approach, their eyes reflecting the firelight like animals.", "Approach peacefully", "Stay back and observe", 7, 8},
    
  // Node 4 - Searching rubble
  {"You dig through chunks of concrete and twisted rebar. Your hands find something smooth - a photograph, miraculously unburned. It shows a family laughing in a green park under blue skies. The faces look familiar, but you can't quite place them.", "Keep the photograph", "Leave it and continue searching", 9, 10},
    
  // Node 5 - Hiding
  {"You crouch behind a fallen beam, heart pounding. The footsteps grow closer, accompanied by a strange clicking sound. Through a gap in the debris, you see a figure in a radiation suit, its face hidden behind a cracked visor. It carries a device that clicks rapidly near certain areas.", "Wait for it to pass", "Follow it quietly", 11, 12},
    
  // Node 6 - Facing the sounds
  {"You turn toward the approaching footsteps, your hands raised. A figure emerges from the shadows - an old woman, her hair white with ash, her clothes singed but intact. She stops when she sees you, her weathered face showing surprise.", "Ask if she's okay", "Ask what happened here", 13, 14},
    
  // Node 7 - Approaching peacefully
  {"'I'm not armed,' you say, showing your empty hands. The three figures whisper among themselves before one speaks: 'You're new to the ash. We can tell. Sit. Warm yourself. But know that warmth comes with a price here.'", "Ask about the price", "Simply sit by the fire", 15, 16},
    
  // Node 8 - Observing from distance
  {"You watch as the figures share scraps of food, their movements careful and ritualistic. One of them suddenly looks directly at you, as if sensing your presence. 'We know you're there,' calls a raspy voice. 'The ash tells us many things.'", "Step into view", "Retreat further back", 17, 18},
    
  // Node 9 - Keeping photograph
  {"You slip the photograph into your pocket. As your fingers touch it, a flash of memory returns - a child's laughter, the smell of grass, the warmth of sunlight on your face. These people in the photo... you knew them once.", "Try to remember more", "Focus on finding shelter", 19, 20},
    
  // Node 10 - Continuing to search
  {"You leave the photograph and dig deeper. Your hand closes around something metallic - a key, ornate and old-fashioned. Etched into its surface are words barely visible through the tarnish: 'Safe Room 7 - Emergency Protocol'.", "Look for Safe Room 7", "Pocket the key for later", 21, 22},
    
  // Node 11 - Waiting
  {"The figure in the radiation suit moves methodically through the ruins, the clicking of its device growing fainter. After it disappears from view, you notice it left behind small metal markers in several locations.", "Investigate the markers", "Follow the figure's path", 23, 24},
    
  // Node 12 - Following quietly
  {"You shadow the figure through the ruins. It stops at a relatively intact building and places its hand on a hidden panel. A door slides open with a soft hiss, revealing clean white light within. The figure enters, and the door begins to close behind it.", "Rush through the door", "Wait and explore elsewhere", 25, 26},
    
  // Node 13 - Asking if she's okay
  {"The woman's eyes soften slightly. 'Okay? Child, I don't think any of us will ever be okay again. But I'm alive, which is more than most can say. You look lost. New to the surface world, aren't you?'", "Ask what she means by 'surface world'", "Ask her to help you", 27, 28},
    
  // Node 14 - Asking what happened
  {"Her face hardens. 'What happened? The sky burned, child. Fire fell like rain. Some called it war, others called it judgment. I call it the end of everything we knew. Now we scavenge in the bones of the old world.'", "Ask how long ago it happened", "Ask if there are others", 29, 30},
    
  // Node 15 - Asking about the price
  {"The figure's hood falls back, revealing scarred features and eyes clouded with cataracts. 'Information,' she says. 'We share our fire, you share what you know. Where did you come from? How did you survive the burning untouched?'", "Tell the truth about your memory loss", "Lie and make up a story", 31, 32},
    
  // Node 16 - Sitting by the fire
  {"The warmth feels wonderful against your skin, but as you settle, you notice the three figures studying you intently. One leans forward and whispers, 'Your skin... it's not marked by the ash. You're from below, aren't you?'", "Ask what they mean by 'below'", "Deny any knowledge", 33, 34},
    
  // Node 17 - Stepping into view
  {"You emerge from your hiding spot. The three figures regard you with a mixture of curiosity and suspicion. The one who spoke earlier stands slowly. 'Come then. But move carefully. The ash remembers everything, and it doesn't forgive trespassers.'", "Ask what the ash remembers", "Approach with caution", 35, 36},
    
  // Node 18 - Retreating
  {"You back away, but your foot catches on loose rubble. The sound echoes through the silence. 'Running won't help,' calls the voice. 'The ash has tasted you now. It will follow wherever you go.'", "Stop running and surrender", "Continue fleeing", 37, 38},
    
  // Node 19 - Trying to remember
  {"You close your eyes and focus on the photograph. More memories surface: birthdays, holidays, bedtime stories. These were your people - your family. But if they were your family, where are they now? And how did you survive when they didn't?", "Search for any trace of your family", "Accept they're gone and move on", 39, 40},
    
  // Node 20 - Finding shelter
  {"You prioritize survival over memories. Nearby, you spot a partially collapsed subway entrance. The tunnels below might offer protection from the ash and whatever else lurks in this wasteland.", "Descend into the tunnels", "Look for surface shelter instead", 41, 42},
    
  // Node 21 - Looking for Safe Room 7
  {"You search the ruins for any sign of Safe Room 7. After an hour of hunting, you find it - a reinforced door marked with a faded '7', built into what was once the basement of an office building.", "Use the key on the door", "Study the door for traps first", 43, 44},
    
  // Node 22 - Pocketing the key
  {"You decide to save the key for when you might need it most. As you continue exploring, you notice that some of the ruins show signs of recent habitation - footprints in the ash, carefully arranged debris.", "Follow the footprints", "Set up your own shelter nearby", 45, 46},
    
  // Node 23 - Investigating markers
  {"The metal markers are small devices with blinking red lights. As you examine one closely, it suddenly projects a holographic message: 'Radiation levels: Critical. Recommend immediate evacuation to designated safe zones.'", "Look for the safe zones", "Destroy the markers", 47, 48},
    
  // Node 24 - Following the figure's path
  {"You trace the route the figure took, noting that it carefully avoided certain areas while methodically checking others. The pattern suggests it was mapping something - or looking for someone.", "Continue following until you find the figure", "Investigate the avoided areas", 49, 50},
    
  // Node 25 - Rushing through the door
  {"You barely make it through before the door seals shut. Inside, the air is clean and the walls are lined with monitors showing various parts of the ruined city. The figure in the radiation suit turns to face you, slowly removing its helmet to reveal a tired but kind face.", "Ask who they are", "Ask about the monitors", 51, 52},
    
  // Node 26 - Waiting and exploring
  {"You decide stealth is wiser than boldness. As you explore the area around the building, you discover an air vent that might provide another way inside - or at least a way to observe without being detected.", "Enter through the vent", "Continue exploring the surface", 53, 54},
    
  // Node 27 - Surface world question
  {"'Ah,' she nods knowingly. 'You're one of the vault dwellers, aren't you? Spent the burning years safe underground while the rest of us learned to breathe ash and eat shadows. Your people were supposed to return years ago.'", "Ask about your people", "Ask why they didn't return", 55, 56},
    
  // Node 28 - Asking for help
  {"She studies your face carefully. 'Help? In this world, help is a luxury few can afford. But... you remind me of someone I lost long ago. I'll make you a deal - help me reach the old communication tower, and I'll share what I know.'", "Accept her deal", "Ask what's at the tower", 57, 58},
    
  // Node 29 - How long ago
  {"'Seven years, two months, sixteen days,' she recites with practiced precision. 'I've counted every sunrise since. Most survivors stopped counting after the first year. Time becomes meaningless when every day is survival.'", "Ask how she's survived so long", "Ask if there's hope for rebuilding", 59, 60},
    
  // Node 30 - Others
  {"'Others? Oh yes, there are others. Scattered tribes, underground dwellers, scavenger gangs. Some have kept their humanity. Others...' She shudders. 'Others have become something else entirely. The ash changes people, given enough time.'", "Ask about the changes", "Ask about the underground dwellers", 61, 62},
    
  // Final nodes (31-62) would continue the branching narrative with various endings based on the player's choices throughout the story
    
  // Sample ending nodes:
  {"[ENDING] As you piece together your lost memories, you realize you were part of an experiment - a test to see if memories could be selectively erased and restored. The ash, the destruction, even the people you've met - all part of an elaborate simulation. The question now is: do you want to remember the truth, or live in this constructed reality?", "Choose to remember", "Choose to forget", -1, -1},
    
  {"[ENDING] In the depths of Safe Room 7, you discover a functioning cryogenic chamber - and realize this is where you came from. You were preserved before the catastrophe, awakened into this new world by an automated system. The photograph in your pocket shows the family you lost to time, not fire. You are the last of the old world.", "Accept your role as guardian of history", "Seal yourself back in the chamber", -1, -1}
};

int ash_story_length = sizeof(ash_story) / sizeof(Node);

const char *item_at_node_ash[] = {
  "sword",
  "shield",
  "potion",
  NULL,
  "stick",
    "bruh"
};

const size_t item_at_node_length_ash = sizeof(item_at_node_ash) / sizeof(item_at_node_ash[0]);
