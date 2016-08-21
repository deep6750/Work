#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int swapbit(int n)
{
    int i = 0;
    int a[8];
    int j = 0;
    int sum = 0;
    int temp = 0;

    while(n != 0)
    {
        a[i] = n % 2;
        n = n / 2;
        //printf("%d",a[i]);
        i++;
    }
    for(j = 7; j >=4; j--)
    {
        temp = a[j-4];
        a[j-4] = a[j];
        a[j] = temp;
    }


    for(j = 0; j < 8; j++)
        printf("%d",a[j]);
      //sum += a[j] * pow(2,j);


    //return sum;
    return 0;
}
int main()
{
    int n, retu = 0;
    scanf("%d",&n);
    retu = swapbit(n);
    printf("%d",retu);
    return 0;

}
