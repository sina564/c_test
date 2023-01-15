#include <stdio.h>

int main(){

    char name[25];                  //25 byte limit
    int age;


    // Name
    printf("What is your full name?\n");
    //scanf("%s", &name);           //address "name" with the & operator
    fgets(name, 25, stdin);         //scan with spaces


    // Age
    printf("How old are you?\n");
    scanf("%d", &age);              //address "age" with the & operator


    // Print everything
    printf("\nHello, %s", name);
    printf("You are %d Years old.\n", age);  
    
    return 0;

}