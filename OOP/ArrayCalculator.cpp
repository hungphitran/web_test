#include <iostream>

using namespace std;

class ArrayCalculator
{
  public:
  static int maxOfArray(int arr[],int n)
  {
      int max=arr[0];
      for (int i=1;i<n;i++)
          {
              if (max<arr[i])
                  {
                      max=arr[i];
                  }
          }
          return max;
  }
  static double maxOfArray(double arr[],int n)
  {
      double max=arr[0];
        for (int i=1;i<n;i++)
            {
              if (max<arr[i])
                  {
                      max=arr[i];
                  }
            }
            return max;
  }
  static int minOfArray(int arr[],int n)
  {
        int min=arr[0];
        for (int i=1;i<n;i++)
            {
              if (min>arr[i])
                  {
                      min=arr[i];
                  }
            }
            return min;
  }
  static double minOfArray(double arr[],int n)
  {
    double min=arr[0];
            for (int i=1;i<n;i++)
            {
              if (min>arr[i])
                  {
                      min=arr[i];
                  }
            }
            return min;
  }
};