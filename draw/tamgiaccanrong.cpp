#include <iostream>
using namespace std;
int main()
{
    int i,j,k,l,a;
    cin>>a;
    for (i=1;i<=a;i++)
    {
        if (i==1)
        {
            for (j=a;j>=1;j--)
            {
                cout<<" ";
            }
            cout<<"*";
        }
        else
        {
            if (i==2)
            {
                for (j=a;j>=i;j--)
                {
                    cout<<" ";
                } 
                cout<<"*";
                for (k=2;k<=i;k++)
                {
                    cout<<" ";
                }
                cout<<"*";
            }
            else 
            {
                if (i!=a)
                {
                    for (j=a;j>=i;j--)
                {
                    cout<<" ";
                }
                cout<<"*"<<" ";
                for (k=3;k<=i;k++)
                {
                    cout<<"  ";
                }
                cout<<"*";
                }
                else
                {
                    cout<<" ";
                    for (j=1;j<=a-1;j++)
                    {
                        cout<<"**";
                    }
                    cout<<"*";
                }
            }
        }
        if (i!=a)
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