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
            if (((i-n/2+1)*(i-n/2+1)+(j-n/2+1)*(j-n/2+1)<n*n/13)&&((i-n/2+1)*(i-n/2+1)+(j-n/2+1)*(j-n/2+1)>n*n/20)||((i-n/3.6)*(i-n/3.6)+(j-n/3.9)*(j-n/3.9)<n*n/37)||((i-n/3.6)*(i-n/3.6)+(j-n/1.45)*(j-n/1.45)<n*n/37))
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