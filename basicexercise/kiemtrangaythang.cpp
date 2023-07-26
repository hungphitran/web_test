#include <iostream>
using namespace std;
int main()
{
    int ngay,thang,nam;
    cin>>ngay>>thang>>nam;
    if (nam<1900)
    {
        cout<<"NO";
    }
    if ((thang>12)||(thang<1))
    {
        cout<<"NO";
    }
    if (((nam%4==0)&&(nam%100!=0))||(nam%400==0))
    {
        if (thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12)
        {
            if ((ngay>=1)&&(ngay<=31))
            {
                cout<<"YES";
            }
            else 
            {
                cout<<"NO";
            }
        }
        else 
        {
            if (thang==2)
            {
                if ((ngay>=1)&&(ngay<=29))
                {
                    cout<<"YES";
                }
                else
                {
                    cout<<"NO";
                }
            }
            else 
            {
                if ((ngay>=1)&&(ngay<=30))
                {
                    cout<<"YES";
                }
                else
                {
                    cout<<"NO";
                }
            }
        }
    }
    else
    {
        if ((thang==1)||(thang==3)||(thang==5)||(thang==7)||(thang==8)||(thang==10)||(thang==12))
        {
            if ((ngay>=1)&&(ngay<=31))
            {
                cout<<"YES";
            }
            else
            {
                cout<<"NO";
            }
        }
        else
        {
            if (thang==2)
            {
                if ((ngay>=1)&&(ngay<=28))
                {
                    cout<<"YES";
                }
                else
                {
                    cout<<"NO";
                }
            }
            else
            {
                if ((ngay>=1)&&(ngay<=30))
                {
                    cout<<"YES";
                }
                else 
                {
                    cout<<"NO";
                }
            }
        }
    }
    return 0;
}