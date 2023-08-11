#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[100],b[100];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    b[0]=a[0];
    for(int i=0;i<n;i++)
    {
        b[i]=b[i-1]+a[i];
    }
    int sum=0;
    for(int i=n-2;i>=0;i--)
    {
        int c=b[n-1]-b[i];
        if(b[i]>=c) sum++;
    }
    cout<<sum<<endl;
    return 0;
}