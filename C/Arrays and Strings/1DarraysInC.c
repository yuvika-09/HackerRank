/* In this challenge, create an array of size n dynamically, and read the values from stdin. Iterate the array calculating the sum of all elements.
Print the sum and free the memory where the array is stored.  */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    } 
    printf("%d",sum);
    return 0;
}
