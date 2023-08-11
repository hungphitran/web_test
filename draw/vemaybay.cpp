#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    int chieu,dau,i,j,k,l;
    char a[9][9];
    srand(time (NULL));
    chieu = rand()%3+0;
    if (chieu==0)
    {
        cout<<"ngang1"<<endl;
        i=rand()%7+1;
        j=rand()%5+0;
        a[i][j]=2;
        a[i][j+1]=1;
        a[i][j+2]=1;
        a[i][j+3]=1;
        a[i+1][j+1]=1;
        a[i+1][j+3]=1;
        a[i-1][j+1]=1;
        a[i-1][j+3]=1;
    }
    else 
    {
        if (chieu == 1)
        {
            cout<<"doc1"<<endl;
            j=rand()%7+1;
            i=rand()%5+0;
            a[i][j]=2;
            a[i+1][j]=1;
            a[i+2][j]=1;
            a[i+3][j]=1;
            a[i+1][j-1]=1;
            a[i+1][j+1]=1;
            a[i+3][j-1]=1;
            a[i+3][j+1]=1;
        }
		else 
		{
			if (chieu ==2)
			{
                cout<<"doc2"<<endl;
				i=rand()%8+3;
				j=rand()%7+1;
				a[i][j]=2;
				a[i-1][j]=1;
				a[i-2][j]=1;
				a[i-3][j]=1;
				a[i-1][j+1]=1;
				a[i-1][j-1]=1;
				a[i-3][j-1]=1;
				a[i-3][j+1]=1;
			}
			else
			{
				if(chieu==3)
				{
                cout<<"ngang2"<<endl;
				j=rand()%8+3;
				i=rand()%7+1;
				a[i][j]=2;
				a[i][j-1]=1;
				a[i][j-2]=1;
				a[i][j-3]=1;
				a[i-1][j-1]=1;
				a[i-1][j+1]=1;
				a[i-3][j+1]=1;
				a[i-3][j-1]=1;
				}
			}
		}
    }
    for (int k=0;k<9;k++)
    {
        for (l=0;l<9;l++)
        {
            if (a[k][l] == 1)
            {
            cout<<"1";
            }
            else
            {
                if (a[k][l]==2)
                {
                    cout<<"2";
                }
                else
                {
                    cout<<"0";
                }
            }
        }


        cout<<endl;
    }
    return 0;

}