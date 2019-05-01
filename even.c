#include<stdio.h>
#include<cs50.h>

int main(void)

{
  int e= get_int("Entrez un chiffre s'il vous plait: ");


  if (e % 2 == 0)
   {
      printf("Le chiffre que vous avez saisi est un nombre pair\n");
   }
   else
  {
      printf("Le chiffre que vous avez saisi est un nombre impair\n");
  }
}