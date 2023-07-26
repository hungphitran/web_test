#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,i,a,s;
    cin>>n;
    a=n;
    i=0;
    while (n>0)
    {
        n=n/10;
        i++;
    }
    s=0;
    n=i;
    while (i>0)
    {
        s=s+(a%10)*(pow(10,(i-1)));
        a=a/10;
        i--;
    }
    cout<<s;
    return 0;


}