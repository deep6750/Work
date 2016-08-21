
#include<stdio.h>
#include<sys/time.h>

void bubble_sort(long int arr[],int n);
void bubble_sort(long int arr[],int n)
{
    int i,j;
        for(i=0;i<n;i++)
        {
            for(j=0;j<i-n-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp;
                    temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}
}
}
}

int main()
{
struct timeval start,end;
int j=0,i=0,num=8000,num2=16000;
long int ar[num],ar2[16000];
double t1,t2;

for(i=1;i<=8000;i++)
{
ar[i]=num;
num--;
}
gettimeofday(&start,NULL);
bubble_sort(ar,num);
gettimeofday(&end,NULL);
t1=(end.tv_sec*1000000+end.tv_usec)-(start.tv_sec*1000000+start.tv_usec);
printf("%lf\n",t1);
for(j=1;j<=16000;j++)
{
ar2[j]=num2;
num2--;
}
gettimeofday(&start,NULL);
bubble_sort(ar2,num2);
gettimeofday(&end,NULL);
t2=(end.tv_sec*1000000+end.tv_usec)-(start.tv_sec*1000000+start.tv_usec);
printf("%lf\n",t2);
printf("%lf\n",t2/t1);
return 0;
}
