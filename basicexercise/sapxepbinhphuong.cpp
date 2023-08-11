#include <iostream>

using namespace std;

int main()
{
    int n,am;
    cin>>n;
    int a[100];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<0) am=i;
    }
    if(a[0]>=0)
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    int duong =am+1;
    while(duong!=n&&am>=0)
    {
        if(a[duong]>-a[am])
        {
            cout<<a[am]*a[am]<<" ";
            am--;
        }
        else
        {
            cout<<a[duong]*a[duong]<<" ";
            duong++;
        }
    }
    while(duong!=n)
    {
        cout<<a[duong]*a[duong]<<" ";
        duong++;
    }
    while(am>0)
    {
        cout<<a[am]*a[am]<<" ";
        am--;
    }
    return 0;
}