#include <stdio.h>
int calculating(int number1,int number2){
    if (number1 > number2){
        printf("%d is bigger than %d", number1,number2);
    }else if(number1 < number2){
        printf("%d is bigger than %d",number2,number1);
    }else{
        printf("They equal each other.");
    }
}
int main(){
    int number1,number2,loop,decision;
    loop = 0;
    while (loop == 0){
        printf("Please give me two number.");
        scanf("%d %d", &number1,&number2);
        printf("You choosed %d and %d right?\n 1. Yes \n 2. No", number1, number2);
        scanf("%d",&decision);
        if (decision == 1){
            calculating(number1,number2);
            printf("\n Do you wanna quit proggramme?\n 1. Yes\n 2. No");
            scanf("%d",&decision);
            if (decision == 1){
                return 0;
            }
        } else{
            printf("Try one more time");
        }
    }
}