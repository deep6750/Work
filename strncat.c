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
    while(str1[i]!='\0')
    {
        i++;
    }
    for(j = n; str2[j]!=0;i++, j++)
    {
        str1[i] = str2[j];
    }
     str1[i]='\0';
     printf("%s",str1);
     return 0;
}
