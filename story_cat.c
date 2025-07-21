#include "story_cat.h"

// Define the story nodes for "The Memory of Ash"
Node cat_story[] = {
  // node 0
  {"You are Mr. Whiskers, a chubby orange tabby. You wake up to find your food bowl mysteriously empty and strange paw prints leading to the kitchen.", "Follow the prints", "Yell for food", 1, 2},
  
  //node 1 
  {"The prints lead to a tiny cat wearing a chef hat making pancakes. 'I'm Chef Mittens!' he squeaks. 'Someone stole all the tuna in town!'", "Help solve the mystery", "Demand pancakes first", 3, 4},
  
  //node 2
  {"You sit and yowl loudly. A fluffy Persian cat appears. 'Quiet! I'm Princess Fluffington. The Tuna Bandit struck again! We need your detective skills!'", "Accept the case", "Ask for payment in treats", 5, 6},
  
  //node 3
  {"Chef Mittens gives you a tiny magnifying glass. You find giant paw prints and tuna cans everywhere. The trail leads to Mayor Whiskertons' mansion.", "Investigate the mansion", "Gather more evidence", 7, 8},
  
  //node 4
  {"You demand pancakes. Chef Mittens flips one onto your head. It tastes like salmon. Suddenly, a black cat in a cape appears. 'I am Captain Hairball! The town's tuna supply is in danger!'", "Follow Captain Hairball", "Eat more pancakes", 9, 10},
  
  //node 5
  {"Princess Fluffington promises you a lifetime supply of salmon treats. The case involves mysterious tuna thefts all over Kitty City.", "Start investigating", "Negotiate for more treats", 11, 12},
  
  //node 6
  {"You demand treats first. She sighs and drops three salmon treats. 'Fine! But hurry, the Tuna Bandit strikes at midnight!'", "Rush to investigate", "Eat treats slowly", 13, 14},
  
  //node 7
  {"At the mansion, you find Mayor Whiskertons sitting on a mountain of tuna cans, looking very round. 'I couldn't help myself!' he meows guiltily.", "Forgive him", "Demand justice", 15, 16},

  //node 8
  {"You use your magnifying glass to examine crumbs, whiskers, and a suspicious catnip trail leading to the park.", "Follow the catnip trail", "Check the pet store", 17, 18},
  
  {"Captain Hairball leads you through alleys. You discover a secret cat society called 'The Midnight Meowers' who steal tuna for poor kittens.", "Join their cause", "Stop their crimes", 19, 20},
  
  {"You stuff your face with salmon pancakes. Chef Mittens laughs. 'Good! You'll need energy. The Tuna Bandit is actually three kittens in a trench coat!'", "Find the kittens", "Ask for the recipe", 21, 22},
  
  {"You start investigating immediately. Princess Fluffington gives you a detective badge made of cardboard and glitter.", "Wear it proudly", "Complain it's not real", 23, 24},
  
  {"She adds five more treats. 'Deal! But if you solve this, I'll throw in a box of premium catnip!'", "Get motivated", "Ask for advance payment", 25, 26},
  
  {"You rush off, treats in mouth. You discover the thief is actually a dog named Barkley who wanted to impress the cats.", "Confront Barkley", "Set a trap", 27, 28},
  
  {"You eat each treat slowly while she taps her paw impatiently. 'HURRY UP!' Finally, you're ready to investigate.", "Begin the case", "Ask for water", 29, 30},
  
  {"Mayor Whiskertons shares his tuna with everyone. The town throws a fish festival in your honor. You're the hero of Kitty City!", "Enjoy the celebration", "Ask for a bigger badge", 31, 32},
  
  {"You demand he return all the tuna. He agrees and promises to go on a diet. The town's tuna supply is restored!", "Accept his apology", "Make him do community service", 33, 34},
  
  {"The catnip trail leads to three kittens playing with empty tuna cans. 'We were just hungry!' they mew. They're actually orphans.", "Help the kittens", "Scold them gently", 35, 36},
  
  {"At the pet store, you find the owner, Mrs. Dogson, hiding tuna. 'I was saving it for my cat's birthday!' She's clearly lying.", "Expose her lie", "Play along", 37, 38},
  
  {"You join The Midnight Meowers and help distribute tuna to needy cats. You become their leader, Captain Whiskers!", "Lead a tuna heist", "Reform the group", 39, 40},
  
  {"You convince them to ask for donations instead of stealing. They become the 'Kitty City Food Bank' and you're their mascot!", "Cut the ribbon", "Make a speech", 41, 42},
  
  {"You find the three kittens. They're actually genius inventors who built a tuna-detecting robot. 'We didn't mean to cause trouble!'", "Help them redirect their talents", "Suggest they become detectives", 43, 44},
  
  {"Chef Mittens teaches you to make salmon pancakes. You open a restaurant together called 'Whiskers & Mittens Diner.'", "Flip pancakes", "Design the menu", 45, 46},
  
  {"You wear the badge proudly. All the other cats are impressed. A news reporter cat wants to interview you about your detective work.", "Give an interview", "Stay humble", 47, 48},
  
  {"You complain it's not real. She gets offended. 'Fine! Solve the case without any badge!' But she secretly follows to help you.", "Work alone", "Apologize", 49, 50},
  
  {"Motivated by catnip, you solve the case in record time. The real thief was a raccoon family who needed food for winter.", "Help the raccoons", "Call animal control", 51, 52},
  
  {"She refuses. 'Payment after results!' You reluctantly start investigating and discover the thief is your own reflection in mirrors.", "Face your reflection", "Break all mirrors", 53, 54},
  
  {"You confront Barkley. He starts crying. 'I just wanted to be part of the cat club!' You realize he's actually really sweet.", "Welcome him to the group", "Teach him cat behavior", 55, 56},
  
  {"You set an elaborate trap with yarn and catnip. You accidentally catch yourself instead. Barkley finds you and helps you out.", "Thank Barkley", "Pretend it was intentional", 57, 58},
  
  {"You begin investigating. The case leads you to discover a underground cat fight club where tuna is the prize.", "Infiltrate the club", "Report to authorities", 59, 60},
  
  {"You ask for water. She brings you a crystal bowl. While drinking, you notice the reflection shows the real thief behind you!", "Turn around quickly", "Keep drinking", 61, 62},
  
  {"THE END: You become the greatest cat detective in history. Statues of you are built in every litter box.", "", "", -1, -1},
  
  {"THE END: You get a bigger badge and your own TV show called 'Whiskers Investigates.' You're famous!", "", "", -1, -1},
  
  {"THE END: Mayor Whiskertons becomes your diet buddy. You both lose weight and gain fame as fitness influencers.", "", "", -1, -1},
  
  {"THE END: He volunteers at the animal shelter. You visit him weekly to make sure he's being good.", "", "", -1, -1},
  
  {"THE END: You adopt the three kittens. Your house is chaos but filled with love and empty tuna cans.", "", "", -1, -1},
  
  {"THE END: You teach them proper behavior. They become model citizens and junior detectives.", "", "", -1, -1},
  
  {"THE END: Mrs. Dogson confesses and throws the best cat birthday party ever. You get invited every year.", "", "", -1, -1},
  
  {"THE END: You play along and help plan the 'birthday party.' It becomes an annual Kitty City tradition.", "", "", -1, -1},
  
  {"THE END: You lead epic but harmless tuna heists, always leaving money behind. You're a gentleman thief!", "", "", -1, -1},
  
  {"THE END: The reformed group wins awards for community service. You have a trophy room full of cat toys.", "", "", -1, -1},
  
  {"THE END: You become mayor of Kitty City after the ribbon cutting ceremony. Your first law: mandatory nap time.", "", "", -1, -1},
  
  {"THE END: Your speech is so inspiring that dogs and cats finally achieve peace. You win the Nobel Purr Prize.", "", "", -1, -1},
  
  {"THE END: Their talents help solve crimes across the nation. You're their manager and very proud.", "", "", -1, -1},
  
  {"THE END: They become the youngest detectives ever. You train them and they surpass even your skills.", "", "", -1, -1},
  
  {"THE END: You become a celebrity chef. Your cookbook 'Cooking for Cats' becomes a bestseller.", "", "", -1, -1},
  
  {"THE END: Your menu is so popular that humans start eating there too. You bridge the species gap through food.", "", "", -1, -1},
  
  {"THE END: Your interview goes viral. You become the first cat influencer and get your own Instagram account.", "", "", -1, -1},
  
  {"THE END: Your humility makes you even more beloved. Cats write songs about your modest heroism.", "", "", -1, -1},
  
  {"THE END: Your independence impresses everyone. You solve future cases solo and become a legend.", "", "", -1, -1},
  
  {"THE END: You apologize and work together. Your partnership becomes the stuff of detective legends.", "", "", -1, -1},
  
  {"THE END: You help the raccoons find proper homes. They send you thank-you cards every holiday.", "", "", -1, -1},
  
  {"THE END: Animal control relocates them safely. You visit them at their new forest home on weekends.", "", "", -1, -1},
  
  {"THE END: You realize the real thief was your own greed. You become a philosopher cat and write deep thoughts.", "", "", -1, -1},
  
  {"THE END: Breaking mirrors brings seven years bad luck, but also solves the case. You're unlucky but successful.", "", "", -1, -1},
  
  {"THE END: Barkley becomes the first honorary cat. Dogs everywhere are jealous of his achievement.", "", "", -1, -1},
  
  {"THE END: You teach Barkley to meow and purr. He's terrible at it but everyone loves his effort.", "", "", -1, -1},
  
  {"THE END: Barkley becomes your sidekick. Together you solve the mystery of the missing tennis balls.", "", "", -1, -1},
  
  {"THE END: Everyone believes your trap was intentional. Your reputation as a master strategist grows.", "", "", -1, -1},
  
  {"THE END: You become the underground fight club champion. Your finishing move is called 'The Hairball.'", "", "", -1, -1},
  
  {"THE END: The authorities shut down the club but start a legal cat sports league instead. You're the commissioner.", "", "", -1, -1},
  
  {"THE END: You catch the thief red-pawed! It was the mailman who wanted to frame cats for his own crimes.", "", "", -1, -1},
  
  {"THE END: You keep drinking and miss the thief, but the water was so good you don't care. Sometimes hydration wins.", "", "", -1, -1}
};

int cat_story_length = sizeof(cat_story) / sizeof(Node);

char item_at_node[cat_story_length][10] = {
  "sword",
  "shield",
  "potion", 
  NULL, 
  "stick",
  "bruh"
};
