#include <iostream>
using namespace std;
int main()
{
    int n,k,tien;
    cin>>n>>k;
    if (k<=100)
    {
        tien=n*10;
    }
    else if (k<=500)
    {
        tien = n*8;
    }
    else 
    {
        tien= n*6;
    }
    cout<<tien;
    return 0;
}