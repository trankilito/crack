#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>


int main(void)
{
 string name = get_string("name: ");

 char initials[200];
 int counter= 0;

 for(int i= 0; i < strlen(name); i++)
 {

      if(isupper(name[i]))
      {
         initials[counter]=name[i];
         counter++;
      }
        initials[counter] = '\0';
        printf("%s\n", initials);

}
}