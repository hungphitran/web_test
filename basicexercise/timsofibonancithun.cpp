#include <iostream>
using namespace std;
int tinh(int n)
{
    int a[n];
    int f3,f1,f2;
    f1=1;
    f2=1;
    a[0]=0;
    a[1]=1;
    for (int i=2;i<n;i++)
    {
        f3= f1+f2;
        f1=f2;
        f2=f3;
        a[i]=f3;
    }
    return a[n-1];

}
int main()
{
    int x;
    cin>>x;
    cout<<tinh(x);
    
    return 0;
}