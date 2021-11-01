#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender)
{
    int temp=0,i;
  if(gender =='b')
  {
      if(number_of_students==1)
      {
          return(*marks);
      }
      else
         if(number_of_students==2)
         {
            return(*marks);
         }
         else
         {

             for(i=0;i<number_of_students;i++)
             {
                if(i%2==0)
                {
                   temp=temp+ *marks;
                   marks=marks+2;
                }

             }
             return(temp);
         }
  }
  else
  {
    if(number_of_students==1)
      {

          return(0);
      }
      else
         if(number_of_students==2)
         {
             marks=marks+1;

            return(*marks);
         }
         else
         {
             if(number_of_students==3)
             {
                 marks=marks+1;
                 return(*marks);
             }
             else
             {
                 marks=marks+1;

                 for(i=0;i<number_of_students;i++)
                 {
                     if(i%2!=0)
                     {
                         temp=temp+ *marks;
                         marks=marks+2;

                     }
                 }
                 return(temp);
             }

         }
  }
}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}
