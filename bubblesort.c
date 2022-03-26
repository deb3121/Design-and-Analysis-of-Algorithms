//BUBBLE SORTING
#include<stdio.h>
#define MAX 50
int main()
{
   int n,i;
   int a[MAX];
   printf("enter number of elements in array\n");
   scanf("%d",&n);
   printf("enter %d elements in array\n",n);
   for( i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   bubble_sort(a,n);
   return 0;
}
void bubble_sort(int a[],int n)
{
   int temp,i=0,j;

   for( i=0;i<n-1;i++)
   {
      for( j=0;j<n-1-i;j++)
      {
          if(a[j]>a[j+1])
          {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
          }
      }
   }
   printf("after bubble sort...\n");
   for( i=0;i<n;i++)
   {
      printf("%d ",a[i]);
   }
}