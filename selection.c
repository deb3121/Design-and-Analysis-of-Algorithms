//SELECTION SORTING 
#include<stdio.h>
#define MAX 50
int main()
{
   int n,i;
   int a[MAX];
   printf("enter number of elements in array\n");
   scanf("%d",&n);
   printf("enter %d elements in array\n",n);
   for(i=0;i<n;i++)
   {
      scanf("%d",&a[i]);
   }
   selection_sort(a,n);
   return 0;
}
void selection_sort(int a[],int n)
{
   int pos,min,i,j;
   for(i=0;i<n-1;i++)
   {
      min=a[i];
      pos=i;
      for( j=i+1;j<n;j++)
      {
         if(min>a[j])
         {
            min=a[j];
            pos=j;
         }
      }
      if(pos!=i)
      {
         a[pos]=a[i];
         a[i]=min;
      }
   }
   printf("after sorting array..\n");
   for(i=0;i<n;i++)
   {
      printf("%d ",a[i]);
   }
}