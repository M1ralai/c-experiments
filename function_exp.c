#include <stdio.h>


int succesion(){
    printf("\nCongrats you found real answer.");
}
int main(){
    int i;
    for (i =0 ; i<=4; i ++){
        int desicion;
        printf("cHello meine Freunde, please give me a number: ");
        scanf("%d" ,&desicion);
        printf("You written %d \n", desicion);
        if (1 == desicion){
            printf("\nWhy you choosed this son of a bitch?\n How can you know i chossed this?");
            succesion();
            return 0;
        }
    }
}