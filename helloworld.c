#include <stdio.h>

int main() {

    // Hello World print
    printf("I like Pizza!\n");
    printf("Even though Pasta is better.\n");
    printf("\n");

    // Variable Tests
    int age=19;
    int ageNextYear=age+1;

    float gpa=2.05;
    char grade='B';
    char name[] = "Sina";                                         //array of chars for a string

    printf("%s, you are %i Years old.\n", name, age);             //%s for string (char array) / %i or %d for int 
    printf("In march, you will be %i years old.\n", ageNextYear);  
    printf("\n");
    printf("Your average grade is %.2f.\n", gpa);                 //%f for float / .2 for 2 decimals
    printf("Your last grade was a %c.\n", grade);                 //%c for char
    printf("\n");

    // Loop Test
    int i;
    for (i=1; i < 11; ++i) {                                     //i gets a value, loop runs as long i is under 11, i+1.
        printf("%d ", i);
    }

    return 0;
}