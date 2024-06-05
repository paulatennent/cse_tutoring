// CS Bowling, COMP1511 22T1 A0
// by Paula Tennent 2022

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    printf("Welcome to CS Bowling!\n");

 

    int frame = 1;
  

    int score1 = 0; 
    int score2 = 0;

    printf("Frame %d, Bowl 1: ", frame);
    scanf("%d", &score1);

    if (score1 < 0 || score1 > 10) {
        printf("Bowl 1 invalid!\n");
        score1 = 0;
    }

    if (score1 != 10) {

        printf("Frame %d, Bowl 2: ", frame);
        scanf("%d", &score2);

        if (score2 < 0 || score2 > 10 || score1 + score2 > 10) {
            printf("Bowl 2 invalid!\n");
            score2 = 0;
        }
    }

    int frame_total = score1 + score2;
    printf("Score for Frame: %d\n", frame_total);


    if (score1 == 10) {
       
        printf("Strike! Bonus for this frame is next two rolls.\n");\

    } else if (frame_total == 10) {
      
        printf("Spare! Bonus for this frame is next roll.\n");
        
    }

    return 0;
}