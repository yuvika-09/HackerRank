/* Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:
Declare  variables: two of type int and two of type float.
Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
Use the  and  operator to perform the following operations:
Print the sum and difference of two int variable on a new line.
Print the sum and difference of two float variable rounded to one decimal place on a new line.*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float x,y;
    scanf("%d %d \n",&a,&b);
    scanf("%f %f",&x,&y);
    printf("%d %d \n",a+b,a-b);
    printf("%0.1f %0.1f",x+y,x-y);
    
    return 0;
}
