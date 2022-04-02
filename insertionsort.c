#include<stdio.h>
#define MAX 50
int main()
{
    int n ;
    printf("\n Enter the number of elements :");
    scanf("%d", &n);
    int arr[MAX] , i , j , key;
    printf("\n Enter elements in the array ");
    for(i=0 ; i<n ;i++)
    scanf("%d" , &arr[i]);
    
    for(i=1 ; i<n ; i++)
    {
        key = arr[i];
        j=i-1;
        while(arr[j]>key && j>=0)
        {
            arr[j+1] = arr[j];
            --j;
        }
        arr[j+1] = key;
    }
    
    printf("Elements after sorting : \n");
    for(i=0 ; i<n ; i++)
    printf("%d " , arr[i]);
    return 0;    
    
}