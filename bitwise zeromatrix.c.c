#include <stdio.h>
#include <stdlib.h>

int main()
{
    int zRows = 0, zColumns = 0, nRows, nColumns;
    scanf("%d",&nRows);
    scanf("%d",&nColumns);
    int i,j,matt[nRows][nColumns];
    for(i = 0; i < nRows; i++)
    {
        for(j = 0; j < nColumns; j++)
        {
            scanf("%d",&matt[i][j]);
        }
    }
    for(i = 0; i < nRows; i++)
    {
        for(j = 0; j < nColumns; j++)
        {
            if(matt[i][j]==0)
            {
                zRows = zRows|(1<<i);
                zColumns = zColumns|(1<<j);
            }
        }
    }
    for(i = 0; i < 32; i++)
    {
        if((zRows&(1<<i))!=0 )
        {
            for(j = 0; j < nColumns; j++)
            {
                if((zColumns&(1<<j))!= 0)
                {
                    matt[i][j] = 0;
                }


            }
        }
    }
    for(i = 0; i < nRows; i++)
    {
        for(j = 0; j < nColumns; j++)
        {
            printf("%d ",matt[i][j]);
        }
        printf("\n");
    }
    return 0;
}
