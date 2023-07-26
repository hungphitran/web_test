#include <iostream>
using namespace std;
int main()
{
    int min,i,x,y;
    cin>>x>>y;
    int arr[x][y];
    for (int j=0;j<x;j++)
    {
        for (int k=0;k<y;k++)
        {
            cin>>arr[j][k];
        }
    }
    for (int l=0;l<y;l++)
    {
        min=arr[0][l];
        for( i=0;i<x;i++)
        {
            if(min>arr[i][l])
            {
                min=arr[i][l];
            }
        }
        cout<<min<<endl;
    }

    return 0;
}