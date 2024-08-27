#include <stdio.h>

int main(){
    int floor,i,a,b;
    printf("Select a floor number you wanna see in star pyramide.");
    scanf("%d",&floor);
    for (i=0;i<floor;i++){
        for (a=floor-i;a>0;a--){
            printf(" ");
        }
        for (b=2*i+1;b>0;b--){
            printf("*");
        }
        printf("\n");
    }
}