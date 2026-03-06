#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   int N;
   printf("Enter the size of the array: ");
   scanf("%d",&N);

   int arr[N];
   int *p=arr;
   printf("Enter the elements: ");
   for(int i=0;i<N;i++)
   {
       scanf("%d",p+i);
   }
    float sum=0;
   for(int i=0;i<N;i++)
   {
    sum+=*(p+i);
   }
   float  mean=sum/N;

   float sum2=0;
   for(int i=0;i<N;i++)
    {
        sum2+= pow((*(p+i)-mean),2);
    }
    float stddev=sqrt(sum2/N);

   printf("The mean value of the array elements is: %0.2f \n",mean);
   printf("The standard deviation of the elements is: %0.2f",stddev);
}
