#include<stdio.h>
#include<cs50.h>

int main(void)
{
 /*Getting the variables for the comparaison*/
int a = get_int ("Please type a: ");
int b = get_int ("Please type b: ");
int c = get_int ("Please type c: ");

/*The conditions of the comparaison that can allow the PC getting the wanted result.*/
/* the smallest to the largest number. (Ascending order)*/

 if (a<b && b<c)
 {
     printf("%i < %i < %i\n", a,b,c);
 }
 if (a<c && c<b)
 {
     printf("%i < %i < %i\n", a,c,b);
 }
 if (b<a && a<c)
 {
     printf("%i < %i < %i\n", b,a,c);
 }
 if (b<c && c<a)
 {
  printf("%i < %i < %i\n", b,c,a);
 }
 if (c<a && a<b)
 {
  printf("%i < %i < %i\n", c,a,b);
 }
 if (c<b && b<a)
 {
  printf("%i < %i < %i\n", c,b,a);
 }

{
 printf("Thank you!!\n");
}

}