#include <iostream>
using namespace std;
int main()
{
    int a,b,i,j,k,l;
    cout<<"nhap a va b"<<endl;
    cin>>a>>b;
    for (i=1;i<=a;++i)
    {
        if (i==1)
        {
            for (j=1;j<=b;++j) 
            {
                cout<<"*";
            }
            cout<<endl;
        }
        else 
        {
           if (i<a)
            {
                cout<<"*";
                for (k=1;k<(b-1);++k)
                {
                    cout<<" ";
                }
                cout<<"*"<<endl;
            }
            else
            {
                for (l=1;l<=b;++l)
                {
                    cout<<"*";
                }
            }
        }
    }
    return 0;
}