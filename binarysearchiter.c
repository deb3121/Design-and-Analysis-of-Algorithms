#include<stdio.h>
int binary_search(int arr[], int se , int low , int high){  //iteration  method
    int mid ;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(arr[mid]==se)
        return mid;
        else if(arr[mid]<se)
        low = mid+1; 
        else
        high = mid-1;
    }
    return -1;
}
int main(){
    int n;
    printf("\n Enter number of elements : ");
    scanf("%d", &n);
    int arr[n] , i , se ;
    printf("\n Enter elements in the array : ");
    for (i=0 ; i<n ; i++)
    scanf("%d" , &arr[i]);
    printf("\n Enter searching element : ");
    scanf("%d", &se);
    int res = binary_search(arr,se,0,n-1);
    if(res== -1)
    printf("Element not found");
    else
    printf("Element found at index %d", res);
    return 0;
}