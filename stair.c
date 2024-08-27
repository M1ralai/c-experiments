#include <stdio.h>

int main(){
    int layer,i,a;
    printf("Give me a number then i will write a pyramid which has this number(s) layer.");
    scanf("%d",&layer);
    for (i=0 ;i<layer;i++){
        for (a=0;a<=i;a++){
            printf("*");
        }
        printf("\n");
    }
}