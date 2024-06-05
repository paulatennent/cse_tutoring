// CS Bowling, COMP1511 22T1 A0
// by Paula Tennent 2022

#include <stdio.h>
#include <stdbool.h>

int main(void) {

    printf("Welcome to CS Bowling!\n");

    int total = 0;
    bool spare = false;
    bool strike = false;

    int frame = 1;
    while (frame <= 10) {

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

        int bonus = 0;
        if (strike) {
            bonus = score1 + score2;
        } else if (spare) {
            bonus = score1;
        }
       

        spare = false;
        strike = false;


        if (score1 == 10) {
            if (frame != 10) {
                printf("Strike! Bonus for this frame is next two rolls.\n");\
            }
            strike = true;
        } else if (frame_total == 10) {
            if (frame != 10) {
                printf("Spare! Bonus for this frame is the next roll.\n");
            }
            spare = true;
        }

        total = total + frame_total + bonus;
        printf("total: %d\n", total);

        frame++;
    }

    if (strike || spare) {

        int bonus_bowl;
        printf("Bonus Bowl 1: ");
        scanf("%d", &bonus_bowl);

        if (bonus_bowl < 0 || bonus_bowl >= 10) {
            printf("Bonus Bowl Invalid!\n");
            bonus_bowl = 0;
        }

        total = total + bonus_bowl;
    }

    printf("Total Score: %d\n", total);

    return 0;
}