#include <iostream>
using namespace std;
int main()
{
    int i,j;
    cin>>i;
    1<=i<=10;
    for (j=1;j<=10;++j)
    {
        cout<<i<<"x"<<j<<"="<<i*j<<endl;
    }
    return 0;
}