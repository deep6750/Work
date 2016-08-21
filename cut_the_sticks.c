#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int count = 0, min = 0;
    for(int arr_i = 0; arr_i < n; arr_i++){
       scanf("%d",&arr[arr_i]);
    }


    for(int c = 0; c < n; c++)
    {
        count = 0;

        for( int i = 0; i < n; i++)
        {    if(arr[i]!=0)
              min = arr[i];

            for(int k = 0; k < n; k++)
            {

                if (arr[k] < min)
               {
                   min = arr[k];
               }
            }
        }

        for(int i = 0 ; i < n;i++)
        {
            if(arr[i] != 0)
             {
                arr[i] = arr[i] - min;
                count++;
             }


        }
        if(count != 0)
        printf("%d\n",count);
    }


    return 0;
}
