//You have to print the character, ch , in the first line. Then print s in next line. In the last line print the sentence, sen.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,s[100],sen[100];
    scanf("%ch",&ch); 
    scanf("%s",s);
    scanf(" %[^\n]s",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;
}
