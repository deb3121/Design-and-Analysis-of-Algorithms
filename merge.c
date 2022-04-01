#include<stdio.h>
#include<conio.h>

void mergesort(int arr[] , int l , int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        mergesort(arr , l , mid);
        mergesort(arr , mid+1 , r);
        merge(arr,l , mid, r);
    }
}

void merge(int arr[], int l , int mid , int r)
{
    int b[100] , k;
    int i = l ; 
    int j = mid+1 ;
    k=l;
    while(i<= mid && j<=r)
    {
        if(arr[i]<arr[j]){
            b[k++] = arr[i++];
        }
        else{
            b[k++] = arr[j++];
        }
    }
    if(i>mid){
        while(j<=r)
        {
            b[k++] = arr[j++];
        }
    }
    else{
        while(i<=mid)
        {
            b[k++] = arr[i++];
        }
    }

    for(k=l ; k<=r ; k++)
    {
        arr[k] = b[k];
    }
}

int main()
{
  int n;
    printf("enter number of elements : ");
    scanf("%d", &n);
    int arr[n] , i ;
    printf("enter the elements in the array \n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    mergesort(arr,0,n-1);

    printf("elements in sorted order");
    for(i=0 ; i<n ; i++)
    {
        printf("%d ", arr[i]);
    }
}