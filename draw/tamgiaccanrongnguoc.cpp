#include <iostream>
using namespace std;
int main()
{
    int n,i,j,k,l;
    cin>>n;
    for (i=1;i<=n;i++)
    {
        for (j=2;j<=i;j++)
        {
            cout<<" ";
        }
        if (i==1)
        {
            for (k=n;k>=i;k--)
            {
            cout<<"*";
            }
            for (l=n-1;l>=i;l--)
            {
            cout<<"*";
            }
        }
        else
        {
            cout<<"*";
            for (k=n-1;k>=i;k--)
            {
                cout<<" ";
            }
            for (j=n-2;j>=i;j--)
            {
                cout<<" ";
            }
            if (i==n)
            {
                continue;
            }
            else
            {
                cout<<"*";
            }
        }
        
        if (i<n)
        {
            cout<<endl;
        }
        else
        {
            continue;
        }
    }
    return 0;
}