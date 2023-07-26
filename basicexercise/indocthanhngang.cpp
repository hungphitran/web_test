#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int i;
    string a;
    getline(cin,a);
    char b=' ';
    for (i=0;i<a.size();i++)
    {
        if (a[i]!=b&&a[i+1]!=b)
        {
        cout<<a[i];
        }
        else
        {
            if (a[i]!=b&&a[i+1]==b)
            {
            cout<<a[i]<<endl;
            }
            else
            {
                continue;
            }
        }
    }
    return 0;
}