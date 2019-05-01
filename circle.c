#include<stdio.h>
#include<cs50.h>

int main(void)
{
    const float PI= 3.14159;

	  float perimetre;
	  float rayon = get_float("Enter the rayon: ");
	  perimetre =  2*rayon*PI;

	  printf("%.2f cm\n",perimetre);

}
