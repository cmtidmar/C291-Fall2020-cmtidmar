/* 
 * Basic C program to print out hello world! 
 * Author: Adeel Bhutta
*/


// modify "hello.c" and change the file to print your name and how many days you have been alive. 
//

#include <stdio.h>

int main(void) {

 
  //Assignment 0

 printf("Name: Clare Meichuan Tidmarsh\n");
 printf("Days Alive: 7,590 days\n"); 
 printf("");

 

  // Assignment 1
 printf("{Welcome to Fall2020 - 'Corona-affected' 8-Week session @ IU}, \n Every week, please start early and  ask for help! Also, let's try to stay safe! //\n");
 int a; // initialize a variable for your count down 
 for ( a = 100; a < 101; a--){      // for loop that decreases by 1  forever from 100 - ...
   printf("%d", a); // prints the countdown
   int i; // initizalize i for the ". . . . ."
   for (i = 0; i < 5; i++){ // for loop for the ". . . . ."
     printf("."); 
     fflush(stdout); // delays each ".",
     sleep(1); // for one second
 }
   printf("\n"); // prints a new line after the 5th dot
 }
      
 return(0);
}
