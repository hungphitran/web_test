#include <iostream>
using namespace std;
int main()
{
    int a,i,j,k;
    cout<<"nhap a";
    cin>>a;
    for (i=a;i>=1;--i)
    {
        cout<<endl;
        for (j=1;j<=i;++j)
        {
            cout<<" ";
        }
        for (k=a;k>=j;--k)
        {
            cout<<"*";
        }
    }
    return 0;
}