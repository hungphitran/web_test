#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if ((a+b>c)&&(a+c>b)&&(b+c>a))
    {
        cout<<"ba canh tao thanh 1 tam giac";
    }
    else {
        cout<<"ba canh khong tao thanh 1 tam giac";
    }
    return 0;
}