//C program to find maximum between three numbers using nested if

#include<stdio.h>
int main(){



   int num1,num2, num3,maxValue;

   printf("Enter Three Numbers For Find Maximum= ");

   scanf("%d %d %d",&num1 ,&num2,&num3);

   if(num1>num2){

        if(num1>num3){

            maxValue=num1;
        }

        printf("%d is Max Value",num1);

   }

   if(num2>num3){

    if(num2>num1){

        maxValue=num2;
    }

     printf("%d is Max Value",num2);

   }

   if(num3>num1){
        if(num3>num2){

            maxValue=num3;
        }

         printf("%d is Max Value",num3);

   }

   else {

     printf("%d=%d=%d Numbers are Equal",num1,num2,num3);
   }


return 0;
}
