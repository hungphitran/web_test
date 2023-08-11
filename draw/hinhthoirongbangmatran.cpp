#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    if (n%2==0)
    {
        m=n+1;
    }
    else
    {
        m=n;
    }
    char a[m][m];
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<m;j++)
        {

            if ((i==m/2-j)||(j==m*3/2-i-1)||(i-j==m/2)||(j-i==m/2)||(i==0)||(i==m-1)||(j==0)||(j==m-1))
            {
                a[i][j]= '*';
            }
            else
            {
                a[i][j]=' ';
            }
            cout<<a[i][j];
            cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}