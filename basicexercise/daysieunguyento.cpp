#include <iostream>
#include <queue>

using namespace std;

int checkprime(int n)
{
    if(n<2) return 0;
    while(n>0)
    {
        if(n<2) return 0;
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0) return 0;
        }
        n/=10;
    }
    return 1;
}

void test(int n)
{
    queue<int> q;
    for (int i=2;i<=n;i++)
    {
        if (checkprime(i)) q.push(i);
    }
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main()
{
    int n;
    cin>>n;
    test(n);
    return 0;
}