#include <stdio.h>

int main(int argc, char* argv[]){
    int i;
    printf("enter a number: ");
    scanf("%d",&i);

    if(i == 42){
        puts("you win!");
    }else{
        puts("you lose!");
    }
    return 0;
}
