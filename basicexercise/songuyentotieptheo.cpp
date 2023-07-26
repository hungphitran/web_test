#include <iostream>
using namespace std;
int main()
{
    int n,x,dem,i,j;
    cin>>n>>x;
    for (i=n;i<=x;i++)
    {
        dem=0;
        for (j=1;j<=i;j++)
        {
            if (i%j==0)
            {
                dem=dem+1;
            }

        }
        if (dem==2)
        {
            cout<<i<<endl;
        }
    }
    return 0;
}