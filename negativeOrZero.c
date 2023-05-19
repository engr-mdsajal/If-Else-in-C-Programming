
/*
 * C program to check positive negative or
    zero using simple if statement
 */

 #include<stdio.h>
int main(){

   int num;

   printf("Enter Any Number= ");

   scanf("%d",&num);

   if(num>0){

    printf("%d is Positive Number",num);
   }

   if(num<0){

     printf("%d is Negative",num);
   }

   if(num==0){

     printf("%d is Zero",num);
   }


return 0;
}
