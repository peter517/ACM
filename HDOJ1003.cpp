#include <iostream>
using namespace std;

void f(int *a)
{
  int Mark_Begin = 1;
  int Mark_End = 1;
  int Max_Sum = a[1];
  int Max_buf;

  for (int i = 1; i<=a[0]; i++)
  {
      Max_buf = 0;
      for (int j = i;j<=a[0]; j++)
      {
        Max_buf +=  a[j];
        if (Max_buf>Max_Sum)
        {
           Mark_Begin = i;
           Max_Sum  = Max_buf;
           Mark_End = j;
        }    
        if (Max_buf < 0)
        {
          i = j ;
          Max_buf = 0;
          break;
        }
      }

  }
  cout<<Max_Sum<<" "<<Mark_Begin<<" "<<Mark_End<<endl;
}
    
int  main()
{
    int n,i,j,k;
    int Test[100001];

    cin>>n;

    if (n>=1&&n<=20)
    {
     for (i = 0;i<n; i++)
     {
          cin>>Test[0];

          for (k = 1;k<=Test[0]; k++)
          cin>>Test[k];


          cout<<"Case "<<i+1<<":"<<endl;
          f(Test);

          if (i!=n-1)
          cout<<endl;
     }
    } 

  return 0;
}


