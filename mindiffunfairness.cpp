#include<bits/stdc++.h>
using namespace std;
int minDiff(int arr[],int n,int k)
{
    int result = INT_MAX;
    sort(arr,arr+n);
    for(int i=0;i<n-k;i++)
    result=min(result,arr[i+k-1]-arr[i]);
    return result;
}
int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<minDiff(arr,n,k)<<endl;
    return 0;
}