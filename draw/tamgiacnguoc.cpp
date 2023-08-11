#include <iostream>
using namespace std;
int main()
{
    int a,i,j;
    cout<<"nhap so ";
    cin>>a;
    for (i=a;i>=1;--i)
    {
        cout<<endl;
        for(j=1;j<=i;++j)
        {
            cout<<"*";
        }
    }
    return 0;

}