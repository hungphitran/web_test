#include <iostream>
#include <string.h>

using namespace std;

int check(int a,int b)
{
    for (int i=2;i<=a;i++)
    {
        if (b%i==0&&a%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cin.ignore();
    string s;
    getline(cin,s);
    string c="";
    if (!check(a,b)) cout<<"Can't Encrypted and Decrypted this Message";
    else
    {
        for (int i=0;i<s.length();i++)
        {
            char z;
            if (s[i]==' ') c+=" ";
            else{
                 z=((int(s[i])-'a')*a+b)%26+'a';
                 c+=z;
            }
        }
        cout<<"Encrypted Message is : "<<c<<endl;
    cout<<"Decrypted Message is : "<<s;
    }
    return 0;
}