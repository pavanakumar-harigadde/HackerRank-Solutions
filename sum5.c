/*Given a five digit integer, print the sum of its digits*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int temp, count=0;
    for (int i=0;i<5;i++){
        temp=n%10;
        count=count+temp;
        n=n/10;
    }
    printf("%d",count);
    return 0;
}
