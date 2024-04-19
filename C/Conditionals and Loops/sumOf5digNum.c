//Given a five digit integer, print the sum of its digits.

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int lr,mr,nr,pr,ar,br,cr,dr,er;
    lr=(n%10);
    ar=n-lr;
    mr=(ar%100);
    br=ar-mr;
    nr=(br%1000);
    cr=br-nr;
    pr=(cr%10000);
    dr=cr-pr;
    er=dr%100000;
   
    printf("%d",lr+(mr/10)+(nr/100)+(pr/1000)+(er/10000));
    return 0;
}
