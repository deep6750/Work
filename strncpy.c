#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i = 0, j = 0;
    char str1[10];
    char str2[10];
    scanf("%s",&str1);
    scanf("%s",&str2);
    scanf("%d",&n);
    for(j = n; str2[j] != 0; j++)
    {
        str1[j] = str2[j];
    }
     str1[j]='\0';
     printf("%s",str1);
     return 0;
}
