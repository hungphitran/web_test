#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for ( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (i=0;i<n;i++)
    {
        for (j=i;j<n;j++)
        {
            if (a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
    for (j=0;j<n;j++)
    {
        cout<<a[j]<<" ";
    }
    return 0;

}