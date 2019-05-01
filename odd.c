#include<stdio.h>
#include<cs50.h>

int main(void)

{
  int h= get_int("Enter the number: ");


  if (h % 2 == 1)
   {
      printf("This is an odd numbers.");
   }
   else
  {
      printf("This is not an odd number.");
  }

}