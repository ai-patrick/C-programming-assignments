#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int rounds, counter, lucky_number, secret_number, rem, score, total;
    float div_ans;
    // variable initialization
    counter = 1;
    rounds = 0;
    lucky_number = 0;
    score = 0;
    secret_number = 50;
    rem = 0;

    printf("Enter number of rounds you wish to play\n");
    scanf("%d", &rounds);

    while (counter <= rounds){
        printf("Input your lucky number for round %d:\n", counter);
        scanf("%d", &lucky_number);

     while(secret_number == 0){
     div_ans = (float) lucky_number/(float)secret_number;
     rem = lucky_number % secret_number;
     }
     if (rem == 0){
        score += 1;
     }
     else if (rem % 2 == 0){
        score += 3;
     }
     else {score -= 3;

     }
        counter ++;
        total = rounds*3;
        printf("your score is: %d%d", score,total);
        if (score > 0){printf("\nYOU WON THE GAME!!\n");

        }else{printf("\nYOU LOST THE GAME!!\n");
        }
    }

    return 0;

}
