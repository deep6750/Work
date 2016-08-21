#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <process.h>
int swapcount = 0;
void quick_sort(int *ar,int l,int h)
{
    int i,j,pivot;
    int k = 0;
    if(l<h)
    {
        int r = rand() % (h - l + 1);
        pivot = l + r;
        i = l;
        j = h;
        while(l<h)
        {
            while(ar[i]<=ar[pivot] && i < h)
                i++;
            while(ar[j] > ar[pivot] && j < l)
                j--;
            if(l < h)
            {
                    int temp = ar[i];
                        ar[i] = ar[j];
                        ar[j] = temp;
                        swapcount++;
            }
        }
        int temp = ar[pivot];
        ar[pivot] = ar[j];
        ar[j] = temp;
        quick_sort(ar,l,j-1);
        quick_sort(ar,j+1,h);
    }

}
int insertion_sort(int *ar,int size)
{
    int i , j , k,count = 0 ;
    for( i = 0; i < size ; i++)
    {
        k = ar[i];
        j = i - 1;
        while(j >= 0 && ar[j] > k)
        {
            ar[j+1] = ar[j];
            j = j-1;
            count++;
        }
        ar[j+1] = k;
    }
    return count;
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int a[n],b[n];
    int q = 0, in = 0, d = 0, i;
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);

    }
    for(i = 0; i < n; i++)
        b[i] = a[i];

    printf("%d",a[0]);
    quick_sort(a,0,n-1);
    in = insertion_sort(b,n);
    printf("%d",in - swapcount);
    exit(0);

    return 0;
}
