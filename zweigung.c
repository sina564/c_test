#include <stdio.h>

int main() {

   int age;
   printf("Please enter your age: ");
   scanf("%d", &age);

   if(age >= 18){
    printf("You can come in."); 
   } 
   else {
    printf("You can't enter, sorry.");
   }

}
