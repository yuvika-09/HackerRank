//Given a string, s, consisting of alphabets and digits, find the frequency of each digit in the given string.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char arr[1000];
    int freq[10]={0};
    scanf("%[^\n]s",arr);
    for(int i=0;i<strlen(arr);i++){
        if (arr[i] >= '0' && arr[i] <= '9')
            freq[arr[i]-'0']++;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", freq[i]);
    }
     
    return 0;
}
