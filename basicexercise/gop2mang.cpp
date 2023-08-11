#include <iostream>

using namespace std;

int main()
{
    int n,m;
    int c1=0,c2=0;
    cin>>n>>m;
    int a[100],b[100],c[100],c3=0;
    cout<<"mang a:"<<endl;
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"mang b: "<<endl;
    for (int i=0;i<m;i++)
    {
        cin>>b[i];
    }

    while(c1!=n&&c2!=m)
    {
        if (a[c1]>b[c2])
        {
            c[c3]=b[c2];
            c2++;
        }
        else 
        {
            c[c3]=a[c1];
            c1++;
        }
        c3++;
        
    }
    while (c1!=n)
    {
        c[c3]=a[c1];
        c1++;
        c3++;
    }
    while (c2!=m)
    {
        c[c3]=b[c2];
        c2++;
        c3++;
    }

    for (int i=0;i<c3;i++)
    {
        cout<<c[i]<<" ";
    }


    return 0;
}