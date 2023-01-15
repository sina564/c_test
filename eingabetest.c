#include <stdio.h>

int main() { 
    
    int age;

    printf("How old are you?");
    scanf("%d", &age);                          //address "age" with the & operator
    printf("You are %d Years old.", age);  
    
    return 0;
}