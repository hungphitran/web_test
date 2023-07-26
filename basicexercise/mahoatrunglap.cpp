#include <iostream>
using namespace std;
int main()
{
    int i,j,dem;
    string a;
    getline(cin,a);
    for (i=0;i<a.length();i++)
    {
        dem=0;
        for (j=0;j<a.length();j++)
        {
            if (a[j]==a[i])
            {
                dem+=1;
            }
            else if(a[j]!=a[i])
            {
                continue;
            }
        }
        if (a[i]==a[i-1])
        {
            continue;
        }
        else{
            cout<<a[i];
            cout<<dem;
        }
        
    }
    return 0;
}