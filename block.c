#include<stdio.h>
#include<cs50.h>

int main(void)
{
    int n;
 do
 {
     printf("Saisissez une valeur positive\n");
     n= get_int("Number: ");
 }
 while(n<=2);

 for (int x= 0; x<n; x++)
 {
    for (int y= 0; y<n; y++)
    printf("##  ##   #  ##  ##\n");
    printf("  ##  ##  ##  ##  \n");
    printf("##  ##      ##  ##\n");
    printf("  ##          ##  \n");
    printf("##  ##      ##  ##\n");
    printf("  ##  ##  ##  ##  \n");

    printf("\n");
 }

}