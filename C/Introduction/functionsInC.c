//Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.

#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int n;
    if (a>b && a>c && a>d){
        n=a;
    }else if(b>a && b>c && b>d ){
        n=b;
    }else if(c>a && c>b && c>d){
        n=c;
    }else{
        n=d;
    }
    return n;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
