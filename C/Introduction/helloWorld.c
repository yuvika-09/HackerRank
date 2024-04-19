//This challenge requires you to print “Hello, World!” on a single line, and then print the already provided input string to stdout.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[100];
    scanf("%[^\n]s", s);  
    printf("Hello, World! \n%s ",s);
    return 0;
}
