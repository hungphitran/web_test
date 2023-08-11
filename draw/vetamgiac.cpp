#include <iostream>
using namespace std;
int main()
{
    int a,i,j;
	cout<<"nhap a";
    cin>>a;
    for ( i=1 ;i<=a;++i)
    {
		cout<<endl;
        for( j=1 ;j<=i;++j)
        {
            cout<<"*";
        }
    }
    return 0;
}