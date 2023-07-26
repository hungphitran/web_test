#include <iostream>
#include <math.h>
using namespace std;
bool timso(int n)
{
    int x,dem;
    x=n;
    dem=0;
    while (n!=0)
    {
        n/=10;
        dem++;
    }
    n=x;
    int s=0;
    for(int i=0;i<dem;i++)
    {
        s=s+pow(x%10,dem);
        x=x/10;
    }
    return (s==n);
    
    
}
int main()
{
    int n;
    cin>>n;
    for (int i=0;i<=n;i++)
    {
        if(timso(i))
        {
            cout<<i<<"  ";
        }
    }
}
