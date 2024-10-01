#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    //define variable
    //create a random number
    // have a while loop to get players guessing
    //if they get number they exit loop

    srand(time(0)); 
    int number = (rand() % 6) + 1;
    int guess;

    printf("Guess a number between 1 and 6\n");
    printf("The number is: %d\n", number); //used for debugging

    while(1){
         scanf("%d", &guess);
        if (number == guess){
            printf("You are right!");
            break; //made sure to break
        } else{
            printf("Try again!\n");
        }
    }
}
