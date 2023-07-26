#include <iostream>
#include <chrono>

using namespace std;

int giaithua(int x)
{
  if(x==0) return 1;
  else 
  {
    return x*giaithua(x-1);
  }
}

int main()
{
    auto startTime = chrono::high_resolution_clock::now();
  int n,k;
  cin>>k;
  cin>>n;
  int a=1,c,d;
  for (int i=n;i>k;i--)
  {
    a*=i;
  }
  c=giaithua(n-k);
    d=a/c;
    cout<<d<<endl;
  auto endTime = chrono::high_resolution_clock::now();
   auto executionTime = chrono::duration_cast<chrono::milliseconds>(endTime - startTime).count();
   cout << "Thời gian chạy: " << executionTime << "ms" << endl;
  return 0;
}