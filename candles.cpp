#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int a,b,n;
    cin>>a>>b>>n;
    int m=INT_MAX;
    for(int i=0;i<=n;i++)
    {
        int curr= i*i*a + (n-i)*(n-i)*b;
        m=min(m,curr);
    }
cout<<m<<endl;
}
}
    