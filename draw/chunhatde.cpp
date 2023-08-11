#include <iostream>
using namespace std;
int main()
{
    int hang,cot,i,j;
    cout<<"nhap so hang"<<" ";
    cin>>hang;
    cout<<"nhap so cot"<<" ";
    cin>>cot;
    for (i=1;i<=hang;++i)
    {
        cout<<endl;
        for (j=1;j<=cot;++j)
        {
            cout<<"*";
        }
    }
    return 0;
}