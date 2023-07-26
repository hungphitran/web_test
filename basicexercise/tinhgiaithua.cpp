#include <iostream>
using namespace std;
int main()
{
    int i,n,kq;
    kq=1;
    cin>>n;
    for (i=1;i<=n;++i)
    {
        kq=kq*i;
    }
    cout<<kq;
    return 0;
}