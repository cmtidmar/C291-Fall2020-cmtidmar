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
 int a; 
 for ( a = 100; a < 101; a--){      
   printf("%d", a);
   int i;
   for (i = 0; i < 5; i++){
     printf(".");
     fflush(stdout);
     sleep(1);
 }
   printf("\n");
 }
      
 return(0);
}
