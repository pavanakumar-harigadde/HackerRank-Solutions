/*C Program to learn for loop*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
    for (int x=a; x < b+1; x++){
         if (x==1)
            printf("one\n");
        else if (x==2)
            printf("two\n");
        else if (x==3)
            printf("three\n");
        else if (x==4)
            printf("four\n");
        else if (x==5)
            printf("five\n");
        else if (x==6)
            printf("six\n");
        else if (x==7)
            printf("seven\n");
        else if (x==8)
            printf("eight\n");
        else if (x==9)
            printf("nine\n");
        else if (x>9 && x%2==0)
            printf("even\n");
        else if (x>9 && x%2!=0)
            printf("odd\n");
    }
        
    return 0;
}

