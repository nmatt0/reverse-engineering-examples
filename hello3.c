#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]){
    char c[50];
    strcpy(c, "string");
    int i = 0;
    while(c[i] != 0){
        printf("%d: %c\n",i,c[i]);
        i++;
    }
}
