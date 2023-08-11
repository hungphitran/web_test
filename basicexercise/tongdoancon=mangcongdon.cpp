#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[100];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int b[100];
    b[0]=a[0];
    for (int i=1;i<n;i++)
    {
        b[i]=b[i-1]+a[i];
    }
    vector < pair<int,int> > v;
    v.push_back(make_pair(0,3));
    v.push_back(make_pair(2,5));
    v.push_back(make_pair(2,4));

    int limited;
    cin>>limited;
    int i=0;
    while(i<v.size())
    {
        int x=v[i].first;
        int y=v[i].second;
        int k=0;
        k=b[y]-b[x]+a[x];
        cout<<k<<endl;
        if(k<=limited) cout<<"true"<<endl;
        else cout<<"false"<<endl;
        i++;
    }

    return 0;


}