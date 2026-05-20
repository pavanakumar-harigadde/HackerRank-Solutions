
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() 
{
    int n;
    scanf("%d", &n);
    int size = 2*n - 1;
    for(int i= 0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            int top=i;
            int left = j;
            int right = size-1-j;
            int down=size-1-i;
            
            int min_dist = top;
            
            if(left<min_dist)
                min_dist=left;
                
            if(right<min_dist)
                min_dist=right;
                
            if(down<min_dist)
                min_dist=down;
                
            printf("%d ", n-min_dist);
        }
        printf("\n");
    }
    return 0;
}
