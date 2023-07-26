#include <iostream>
using namespace std;
int a[100000];
int main()
{
    unsigned int n;
    int max1,max2;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max1=a[0];
    max2=a[0];
    for (int k=0;k<n;k++)
    {
        if (a[k]>max1)
        {
            max1=a[k];
        }
    }
    for (int j=0;j<n;j++)
    {
        if ((a[j]>=max2)&&(a[j]<max1))
        {max2=a[j];}
    }
    cout<<max2;
    return 0;
}