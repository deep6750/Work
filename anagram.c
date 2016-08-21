#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,l,k,n;
    scanf("%d",&n);
    char arr[n][50],shd[n][50];
    int len[n];
    for(i=0;i<n;i++)
    {   scanf("%s",arr[i]);
        shd[i]=arr[i];
    }

    for(i=0;i<n;i++)
        len[i]=strlen(arr[i]);
    if(l==k)
    {
        for(i = 0; i < l ; i++)
        {
            for(j = 0; j < l-i-1;j++)
            {
                if((int)arr[i][j]>(int)arr[i][j+1])
                {
                char temp;
                temp=arr[i][j];
                arr[i][j]=arr[i][j+1];
                arr[i][j+1]=temp;
                }
            }
        }
    }
    if(strcmp(arr,arr2)==0)
    {
        for( i = 0; i < n;)
        {
            strcpy(mer[i],cpyarr);
            strcpy(mer[++i],cpyarr2);
        }
        printf("Its an Anagram");
    }

    else printf("Its Not an Anagram");




}
