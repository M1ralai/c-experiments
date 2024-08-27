#include <stdio.h>
int main(){
    int imput_number;
    printf("Hello sir, please give me a number.");
    scanf("%d", &imput_number);
    printf("You choosed %d as a number, we will see it's idiom or odd", imput_number);
    if (imput_number%2 == 0){  
        if (imput_number == 0){
            printf("We couldn't say idiom or odd for this number");
        }else{
            printf("\nThis number is idiom");
        }
    } else{
        printf("\nThis number is odd");
    }
    return 0;
}