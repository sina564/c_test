#include <stdio.h>
int main(void) {

    // Hello World print
    printf("I like Pizza!\n");
    printf("Even though Pasta is better.\n");

    // Variable Tests
    int age=19;
    int ageNextYear=age+1;

    float gpa=2.05;
    char grade='B';
    char name[] = "Sina";

    printf("%s, you are %i Years old.\n", name, age);
    printf("In march, you will be %i years old.\n", ageNextYear);
    
    return 0;
}