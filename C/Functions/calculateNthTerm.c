/* There is a series, S, where the next term is the sum of previous three terms. Given the first three terms of the series, a, b, and c respectively, 
you have to output the nth term of the series using recursion.  */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.

int find_nth_term(int n, int a, int b, int c) {
    int ans=0,t1=a,t2=b,t3=c;
    if(n == 1)
        ans = t1;
    else if (n == 2)
        ans = t2;
    else if (n == 3)
        ans = t3;
    else{
        for(int i=4;i<=n;i++){
            ans=t1+t2+t3;
            t1=t2;
            t2=t3;
            t3=ans;
        }
    }
    return ans;
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = find_nth_term(n, a, b, c);
 
    printf("%d", ans); 
    return 0;
}
