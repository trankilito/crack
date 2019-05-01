#include<stdio.h>
#include<cs50.h>
#include<stdlib.h>
#include<string.h>

#include"struct.h"

int main (void)
{
      int enrollment= get_int ("Please enter the enrollment: ");
      student student[enrollment];

      for(int i = 0; i<enrollment ; i++)
      {
          student[i].name= get_string("Name:");
          student[i].cohort= get_string("Cohort:");
      }
          FILE *file= fopen("students.csv","w");

          if (file)
          {
          for (int i=0; i<enrollment ; i++)
          {
              fprintf (file,"%s,%s\n",student[i].name,student[i].cohort);
          }
           fclose(file);
          }



}