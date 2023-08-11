#include <iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    if (n%2==0)
    {
        n+=1;
    }
    char a[n][n];
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (((j==n/2)&&i==n/4)||(i==0)||(j==0)||(i==n-1)||(j==n-1)||((j-i==(n+1)/4)&&(j<=n/2))||(j+i==(n-1)*3/4)&&(j>=n/2)||(i+j==n/6)||(i+j==(n-1)*3/2)||(j-i==n*4/5)||(i-j==n*1/2))
            {
                a[i][j]= '*';
            }
            else 
            {
                a[i][j]= ' ';
            }
            cout<<a[i][j]<<' ';

        }
        cout<<endl;

    }
    return 0;

}