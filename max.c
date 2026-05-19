/*Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.*/
#include <stdio.h>

int max_of_four(int a, int b, int c, int d){
    int max;
    if(a>b && a>c && a>d)
        max=a;
    else if(b>a && b>c && b>d)
        max=b;
    else if(c>a && c>b && c>d)
        max=c;
    else if(d>a && d>b && d>c)
        max=d;
    return max;
}

int main() {
    int a, b , c, d;
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    printf("%d",max_of_four( a,  b,  c,  d));
    return 0;
}
