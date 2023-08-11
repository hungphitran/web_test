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
            if (((i==0)||(j==0)||(i==n-1)||((i-n/2)*(i-n/2)+(j-n/2)*(j-n/2)<=(n-1)*(n-1)/6)&&((i-n/2)*(i-n/2)+(j-n/2)*(j-n/2)>(n-1)*(n-1)/9)||(j==n-1)))
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