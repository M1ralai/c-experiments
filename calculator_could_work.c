#include <stdio.h>

int main(){
    int imput[] = {};
    int operations[] = {};
    int imput_number, logic_number,i,result;
    printf("How many number will you use in this process?");
    scanf("\n%d",&imput_number);
    logic_number = imput_number-1;
    for (i = 0;i<imput_number;i++){
        printf("Please give me your %d. number:", i+1);
        scanf("%d", &imput[i]);
    }
    for (i=0; i<logic_number;i++){
        printf("\n 1. Addition \n 2. Substraction \n 3. Multiple");
        printf("\nPlease give me your %d. prosess. ",i+1);
        scanf("%d",&operations[i]);
    }
    for (i=0;i<imput_number;i++){
        printf("\n%d. number is %d", i+1,imput[i]);
    }
    for (i=0;i<logic_number;i++){
        printf("\nYou choosed %d. prosess is %d",i+1,operations[i]);
    }
    for (i=0;i<logic_number;i++){
        if (operations[i]==1){
            imput[i+1] = imput[i]+imput[i+1];
        } else if(operations[i]==2){
            imput[i+1] = imput[i]-imput[i+1];
        }else if(operations[i]==3){
            imput[i+1] = imput[i]*imput[i+1];
        }
        result = imput[i+1];
    }
    printf("Result is: %d", result);
}