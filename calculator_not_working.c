#include <stdio.h>

int main(){
    int eternity, decision, i, general_decision,number_desicion,operation_desicion;
    int operations[] = {};
    int numbers[] = {};
    printf("\n How many number do you wanna use in this process?");
    scanf("\n%d",&general_decision);
    operation_desicion = general_decision - 1;
    number_desicion = general_decision - 1;
    for (i = 0; i<= number_desicion;i++){
        printf("\n Please give me a number: ");
        scanf("\n%d",&numbers[i]);
        }
    for (i = 0; i <= operation_desicion;i++){
        printf("\n Choose the operation that you wanna use.\n 1. Addition \n 2. Subtraction \n 3. Multiple");
        scanf("\n%d", &decision);
        operations[i] = decision;
    }
    for (i = 0; i <= operation_desicion ;i++){
        printf("\nYou choosed %d. number as %d", i+1 ,numbers[i]);
        printf("\nYou choosed %d. operation as %d", i+1,operations[i]);
    }
    for (i = 0; i<=operation_desicion;i++){
        if (operations[i] == 1){
            numbers[i+1] = numbers[i]+numbers[i+1];
        } else if(operations[i]== 2){
            numbers[i+1] = numbers[i]-numbers[i+1];
        } else if(operations[i]==3){
            numbers[i+1] = numbers[i]*numbers[i+1];
        }
    }
    printf("result is : %d",numbers[number_desicion]);
}