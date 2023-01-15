#include <stdio.h>
#include <stdbool.h>

int main(void) {

    // Hello World print
    printf("I like Pizza!\n");
    printf("Even though Pasta is better.\n");
    printf("\n");

    // Variable Tests
    int age=19;
    int ageNextYear=age+1;

    float gpa=2.05;
    char grade='B';
    char name[] = "Sina";                                            //array of chars for a string

    printf("%s, you are %i Years old.\n", name, age);                //%s for string (char array) + %i or %d for int 
    printf("In march, you will be %i years old.\n", ageNextYear);  
    printf("Your average grade is %f.\n", gpa);                      //%f for float
    printf("Your last grade was a %c.\n", grade);                    //%c for char
    

    bool e = true; 
    printf("Did you study for your test? Answer: %d\n", e);          //%d for boolean

    return 0;
}