#include <iostream>
using namespace std;
int main()
{
    int a,i,j,k;
    cout<<"nhap a";
    cin>>a;
    for (i=1;i<=a;++i)
    {
        for (j=1;j<=i;++j)
        {
            cout<<" ";
        }
        for (k=a;k>=i;--k)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;

}