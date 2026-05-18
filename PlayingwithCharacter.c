/*You have to print the character, ch, in the first line. Then print s in next line. In the last line print the sentence, sen .*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch[100], s[100], sen[250];
    scanf("%[^\n]%*c",ch);
    scanf("%[^\n]%*c",s);
    scanf("%[^\n]%*c",sen);
    
    printf("%s",ch);
    printf("\n%s",s);
    printf("\n%s",sen);
    return 0;
}
