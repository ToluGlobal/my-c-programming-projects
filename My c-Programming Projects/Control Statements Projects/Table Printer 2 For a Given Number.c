Table Printer 2 For a Given Number

//program to print table for the given number using while loop in c

#include <stdio.h>

int main()
{
 int i=1, number=0, b=9;
 printf("Enter a number: ");
 scanf("%d",&number);
 
 while(i<=10)
 {
     printf("%d\n", (number*i));
     i++;
 }
    return 0;
}