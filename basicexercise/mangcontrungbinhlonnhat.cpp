#include <iostream>
#include <iomanip>

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
    int k;
    cin>>k;
    int left =0,right=k-1;
    double ans=0;

    for (int i=left;i<k;i++)
    {
        ans+=a[i];
    }
    left++;
    right++;

    while(right<n)
    {
        int s=ans+a[right]-a[left-1];
        if(s>ans) ans=s;
        left++;
        right++;
    }
    ans/=4;
    cout<<fixed<<setprecision(5)<<ans<<endl;
    return 0;
}