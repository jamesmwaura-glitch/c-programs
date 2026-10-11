#include <stdio.h>
 #include <stdlib.h>
  #include <time.h> 
  int main() {
     int secretNumber, guess;
      int attempts = 0; // Generate a random number between 1 and 20 
      srand(time(0));
       secretNumber = (rand() % 20) + 1;
        printf("Welcome to the Number Guessing Game!\n");
         printf("Guess a number between 1 and 20.\n"); 
         do { printf("Enter your guess: ");
          scanf("%d", &guess); attempts++; 
          if (guess > secretNumber) { 
            printf("Too high!\n");
             } 
             else if (guess < secretNumber) {
                 printf("Too low!\n");
                  }
                   else { printf("Congratulations!\n");
                    printf("You guessed the correct number in %d attempts.\n", attempts);
                     }
                      }
                       while (guess != secretNumber);
  return 0;
  }


































































