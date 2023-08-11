#include <iostream>
using namespace std;
int main()
{
    int a,i,j,k,l;
    cout<<"nhap a"<<endl;
    cin>>a;
    cout<<"*"<<endl;
    for (i=1;i<=a;++i)
    {
    
        
        
           if (i<a)
            {
                cout<<"*";
                for (k=1;k<=i;++k)
                {
                    cout<<" ";
                }
                cout<<"*"<<endl;
            }
            else
            {
                cout<<"*";
                for (l=1;l<=a;++l)
                {
                    cout<<"*";
                }
            }
    }
    return 0;
}