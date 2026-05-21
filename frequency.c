/*Digit Frequency*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int count[10];
    int i;
    for( i=0; i<10; i++){
        count[i]=0;
    }
    char num[1000] ;
    
    
    
    scanf("%s", &num);  
    for(int i=0; i<strlen(num); i++){
        if(num[i]=='0'){
            count[0]+=1;
        }
        if(num[i]=='2'){
            count[2]+=1;
        }
            
        if(num[i]=='3'){
            count[3]+=1;
        }
            
        if(num[i]=='4'){
            count[4]+=1;
        }
            
        if(num[i]=='5'){
            count[5]+=1;
        }
            
        if(num[i]=='6'){
            count[6]+=1;
        }
            
        if(num[i]=='7'){
            count[7]+=1;
        }
            
        if(num[i]=='8'){
            count[8]+=1;
        }
            
        if(num[i]=='1'){
            count[1]+=1;
        }
            
        if(num[i]=='9'){
            count[9]+=1;
        }
            
       
    }
    
    for(int i=0; i<10; i++){
        printf("%d ",count[i]);
    }
    return 0;
}

