#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, f, i = 0, j = 0, found = 0;
    scanf("%d",&n);
    char str1[n];
    char str2[n];
    scanf("%s",&str1);
    scanf("%s",&str2);
    scanf("%d",&f);

    for(j = f; str2[j]!='\0',str1[j]!='\0'; j++)
    {
        if(str1[j] == str2[j])
        {
            found = 1;

        }
        else found = 0;
    }

    if(found == 1)
     printf("Yes Equal");
     else if(found == 0)
     printf("Not Equal");
     return 0;
}
