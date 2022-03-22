#include<stdio.h>
int linearsearch(int arr[] , int n , int key)
{
    int i;
    for(i=0;i<n;i++)  
        if(arr[i]==key)
        return i;
return -1;
}
int main()
{
    int n;
    printf("\n Enter the number of elements : ");
    scanf("%d",&n);
    int i , arr[n] , key;
    printf("\n Enter the elements in the array : ");
    for(i=0 ;i<n ;i++)
    scanf("%d", &arr[i]);
    printf("\n Enter searching element : ");
    scanf("%d",&key);
    int res = linearsearch(arr , n , key);
    if(res== -1)
    printf("\n Element not found");
    else
    printf("\nElement found at index %d",res);
    return 0;
}