#include <stdio.h>
#include <ctype.h>
int sports();
int science();
int tech();
void main()
{
   int ch,score=0;
   printf("QUIZ GAME\n");
   printf("1.Science\n");
   printf("2.Sports\n");
   printf("3.Technology\n");
   printf("Enter your choice according to the numbers given\n ");
   scanf("%d",&ch);
   scanf("%*c");
   switch(ch)
   {
       case 1:score=science();break;
       case 2:score=sports();break;
       case 3:score=tech();break;
       default:printf("enter a valid number i.e. 1,2 or 3");break;
   }
   printf("*******\n");
   printf("FINAL SCORE: %d/5\n", score);
   printf("*******\n");
}
int science()
{
   char questions[][100] = {"1. Which planet in our solar system is known for its rings? ",
                            "2. What is the process by which plants prepare their own food using sunlight?",
                            "3. On the periodic table, what symbol stands for the element Silver?",
                            "4.What is the smallest unit of life?",
                            "5.What is the freezing point of water in degrees Celsius?"   };

   char options[][100] = {"A) Jupiter","B) Venus","C) Mars","D) Saturn",
                          "A) Respiration","B) Photosynthesis","C) Digestion","D) Fermentation",
                          "A) Ag","B) Au","C) Si","D) Sg",
                          "A) Molecule","B) Cell","C) Atom","D) Organism",
                          "A) 32°C","B) 100°C","C) 0°C","D) -10°C"};

   char answers[] = {'D', 'B', 'A','B','C'};
   int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);
   char guess = ' ';
   int score = 0;
   for(int i = 0; i < numberOfQuestions; i++)
   {
      printf("*******\n");
      printf("%s\n", questions[i]);
      printf("*******\n");

      for(int j = (i * 4); j < (i * 4) + 4; j++)
      {
         printf("%s\n", options[j]);
      }

      printf("guess: ");
      scanf("%c", &guess);
      scanf("%*"); //clear \n from input buffer

      guess = toupper(guess);

      if(guess == answers[i])
      {
         printf("CORRECT!\n");
         score++;
      }
      else
      {
         printf("WRONG!\n");
      }
   }
    return score;
}
int sports()
{
   char questions[][100] = {"1. Which sport is known as \"The Gentleman's Game\" ? ",
                            "2.In which sport would you execute a \"punch\" or a \"kick\"?",
                            "3. How many players are there in a standard soccer team?",
                            "4.Which cricketer is known as the \"God of Cricket\" in India?",
                            "5.Against which country did India play its first official Test match?"   };

   char options[][100] = {"A) Polo","B) Golf","C) Cricket","D) Tennis",
                          "A) Boxing","B) Taekwondo","C) Both A and B","D) Fencing",
                          "A) 9","B) 10","C) 11","D) 12",
                          "A) Virender Sehwag","B) Rahul Dravid","C) Sachin Tendulkar","D) Yuvraj Singh",
                          "A) England","B) Australia","C) West Indies","D) South Africa"};

   char answers[] = {'C', 'C', 'C','C','A'};
   int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);
   char guess = ' ';
   int score = 0;
   for(int i = 0; i < numberOfQuestions ; i++)
   {
      printf("*******\n");
      printf("%s\n", questions[i]);
      printf("*******\n");

      for(int j = (i * 4); j < (i * 4) + 4; j++)
      {
         printf("%s\n", options[j]);
      }

      printf("guess: ");
      scanf("%c", &guess);
      scanf("%*"); //clear \n from input buffer

      guess = toupper(guess);

      if(guess == answers[i])
      {
         printf("CORRECT!\n");
         score++;
      }
      else
      {
         printf("WRONG!\n");
      }
   }
    return score;
}
int tech()
{
   char questions[][100] = {"1. What does \"HTTP\" stand for in the context of web addresses? ",
                            "2. Which technology is used to connect wireless devices within short ranges, often for transferring files or connecting peripherals?",
                            "3. What does \"CPU\" stand for in computer technology?\n",
                            "4.Who founded Apple ?\n",
                            "5.Which company developed the Android operating system?\n"   };

   char options[][100] = {"A) Hyper Transfer Text Protocol","B) Hyperlink and Text Transfer Protocol","C) HyperText Transfer Protocol","D) High-Tech Text Transmission Protocol",
                          "A) Bluetooth","B) Wi-Fi","C) Ethernet","D) Infrared",
                          "A) Central Processing Unit","B) Computer Performance Unit","C) Central Process Utility","D) Core Programming Unit",
                          "A) Steve Jobs","B) Jeff Bezos","C) Steve Wozniak","D) Paul Allen",
                          "A) Apple Inc.","B) Microsoft Corporation","C) Google Inc.","D) Samsung Electronics"};

   char answers[] = {'C','A', 'A','A','C'};
   int numberOfQuestions = sizeof(questions)/sizeof(questions[0]);
   char guess = ' ';
   int score = 0;
   for(int i = 0; i < 5; i++)
   {
      printf("*******\n");
      printf("%s\n", questions[i]);
      printf("*******\n");

      for(int j = (i * 4); j < (i * 4) + 4; j++)
      {
         printf("%s\n", options[j]);
      }

      printf("guess: ");
      scanf("%c", &guess);
      scanf("%*");

      guess = toupper(guess);

      if(guess == answers[i])
      {
         printf("CORRECT!\n");
         score++;
      }
      else
      {
         printf("WRONG!\n");
      }
   }
    return score;
}
