/*
 C program to check even or odd number
 */

 #include<stdio.h>
 int main(){

     int number;

     printf("Enter Any Number to check Even Or Odd= ");

     scanf("%d",&number);

     if(number%2==0){


        printf("%d is Even",number);
     }
     else{

            printf("%d is Odd",number);

     }


 return 0;
 }


