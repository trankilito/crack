#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>

#include "struct1.h"

int main (void)
{
     int number= 20;

      stats stats[number];


          for (int i= 0; i < number;i++)
            {
          stats[i].iD= get_string("Enter the ID number: ");

          stats[i].name= get_string("Enter the name: ");

          stats[i].sex= get_char("Enter the gender: ");

          stats[i].quiz1= get_string("Enter the quiz1 score: ");

          stats[i].quiz2= get_string("Enter the quiz2 score: ");

          stats[i].mscore= get_string("Enter the midterm score over 20: ");

          stats[i].fscore= get_string("Enter the final score over 20: ");

          stats[i].tscore= get_string("Enter the total score: ");

printf("Next student please.\n");
            }

             FILE *file= fopen("stats.csv","w");

          if (file)

          for (int a=0; a < number; a++)
          {
              fprintf (file,"%s,%s,%c,%s,%s,%s,%s,%s\n",stats[a].iD,stats[a].name,stats[a].sex,stats[a].quiz1,stats[a].quiz2,stats[a].mscore,stats[a].fscore,stats[a].tscore);
          }

          fclose(file);
}
