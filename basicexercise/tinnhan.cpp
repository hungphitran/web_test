#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int check(vector <int> v,int i)
{
    for (int j=0;j<i;j++)
    {
        if(v[j]==v[i]) return 1;
    }
    return 0;
}

void hienthi(vector<int> v,int k)
{
    queue<int> q;
    q.push(v[0]);
    int sum=1;
    for (int i=1;i<v.size();i++)
    {
        if(check(v,i))
        {
            continue;
        }
        else
        {
            if(sum==k)
            {
                q.pop();
                q.push(v[i]);
            }
            else
            {
                q.push(v[i]);
                sum++;
            }
        }
    }

    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}

int main()
{
    int n,k;
    cin>>n;
    queue <int> q;
    vector <int > v;
    for (int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    cin>>k;
    hienthi(v,k);
    return 0;
}