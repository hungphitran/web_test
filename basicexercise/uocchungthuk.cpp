#include <iostream>

using namespace std;

int uclnk(int x,int y,int k)
{
    int n=0;
    for (int i=1;i<=y;i++)
    {
        if (x%i==0&&y%i==0)
        {
            n++;
        }
        if (n==k) return i;
    }
    return -1;
}



int main()
{
    int x,y,k;
    cin>>x>>y>>k;
    int o=uclnk(x,y,k);
    cout<<o;
    return 0;

}