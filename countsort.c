//COUNT SORT
#include <stdio.h>
#include<stdlib.h>
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
   count_sort(a,n);
   return 0;
}
int findMax(int a[],int n)
{
int max=0;
int i;
for(i=0;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
return max;
}

void count_sort(int a[],int n)
{
int i,j,max,*c;
max=findMax(a,n);
c=(int *)malloc(sizeof(int)*(max+1));
for(i=0;i<max+1;i++)
{
c[i]=0;
}
for(i=0;i<n;i++)
{
c[a[i]]++;
}
i=0;j=0;
while(j<max+1)
{
if(c[j]>0)
{
a[i++]=j;
c[j]--;
}
else
j++;
}
printf("after count sort...\n");
   for( i=0;i<n;i++)
   {
      printf("%d ",a[i]);
   }
}