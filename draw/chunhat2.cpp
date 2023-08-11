#include <iostream>
using namespace std;
int main()
{
    int i,j,n,k;
    cin>>i>>j;
    for (n=1;n<i;++n)
    {
        for (k=1;k<=j;++k)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for (k=1;k<=j;++k)
    {
        cout<<"*";
    }
    return 0;
}