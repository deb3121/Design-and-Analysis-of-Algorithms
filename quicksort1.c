#include<stdio.h>
void quicksort(int arr[] , int first , int last)
{
  int i ,j , pivot ,temp;
  pivot = first;
  i = first ;
  j = last ;
  if(first < last)
  {
    while(i<j)
    {
        while(arr[i]<= arr[pivot] && i<last)
        i++ ;
        while(arr[j] > arr[pivot] && j>0)
        j--;
        if(i<j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[j];
    arr[j] = arr[pivot];
    arr[pivot] = temp;
    
    quicksort(arr,first,j-1);
    quicksort(arr,j+1,last);
  }
}

int main()
{
    int n;
    printf("\n Enter number of elements : ");
    scanf("%d", &n);
    int arr[n] , i ;
    printf(" \n Enter the elements in the array \n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d ", &arr[i]);
    }
    
    quicksort(arr,0,n-1);

    printf(" \nElements in sorted order: \n");
    for(i=0 ; i<n ; i++)
    {
        printf("%d\n", arr[i]);
    }
}