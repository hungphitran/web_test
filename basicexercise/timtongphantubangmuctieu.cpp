#include <iostream>

using namespace std;

int check(int a[],int n,int k)
{
    int left=0,right=n-1;
    while (left<right)
    {
        if (a[left]+a[right]==k)
        {
            return 1;
        }

        if (a[left]+a[right]>k)
        {
            right--;
        }
        else left++;
    }
    return 0;
}

int main()
{
    int n,k;
    cout<<"nhap so phan tu "<<endl;
    cin>>n;
    cout<<"nhap so muc tieu:"<<endl;
    cin>>k;
    int a[100];
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if (check(a,n,k)) cout<<"True"<<endl;
    else cout<<"false"<<endl;
    return 0;
    
}