#include <iostream>

using namespace std;

int find(int a[],int b[],int n,int s)
{
    int i=0;
    int l=-1,r=-1;
    while(b[i]<s)
    {
        i++;
    }
    for(int j=i;j<n;j++)
    {
        if(l!=-1)
        {
            break;
        }
        for(int k=0;k<j;k++)
        {
            if(b[j]==s)
            {
                l=0;
                r=j;
            }
            if(b[j]-s==b[k])
            {
                l=k+1;
                r=j;
            }
        }
    }
    if(l!=-1&&r!=-1)
    {
        for(int i=l;i<=r;i++)
        {
            cout<<a[i]<<" ";
        }
        return 1;
    }
    else
    {
        return 0;
    }

}
int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int s;
    cin>>s;
    int *b=new int[n];
    b[0]=a[0];
    for(int i=1;i<n;i++)
    {
        b[i]=b[i-1]+a[i];
    }

    if(find(a,b,n,s)==0)
    {
        cout<<"-1";
    }    
    delete[] a;
    delete[] b;
    return 0;
}