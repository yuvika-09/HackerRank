/* You are given an array of integers, marks, denoting the marks scored by students in a class.
The alternating elements marks0, marks2, marks4 and so on denote the marks of boys.
Similarly,marks1, marks3, marks5 and so on denote the marks of girls. */


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  int sum=0;
  for(int i=0;i<number_of_students;i++){
      if(gender=='b'){
          if(i%2==0)
            sum+=marks[i];
      }
    else if(gender=='g'){
        if(i%2!=0)
            sum+=marks[i];
    }
  }
  return sum;
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