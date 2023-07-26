#include <iostream>

using namespace std;

int checkprime(int a)
{
    if (a<2)
    {
        return 0;
    }
    for(int i=2;i*i<=a;i++)
    {
        if (a%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int analyse(int a)
{
    if (checkprime(a))
    {
        return a;
    }
    int s=0;
    for (int i=2;i<=a;i++)
    {
        while(a%i==0)
        {
            if (checkprime(i))
            {
                s+=i;
                a/=i;
            }
            else{
                break;
            }
        }
    }
    return analyse(s);
}

int main()
{
    int n;
    cin>>n;
    int x=analyse(n);
    cout<<x;
    return 0;
}