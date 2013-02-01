#include <iostream>
using namespace std;
    
int  main()
{
  int n,i;
  int Request[101];
  int up = 6,down = 4,stp = 5;

  memset(Request,0,sizeof(int) * 100);

  while(cin >> n && n)
  {
      long Time_Cost = 0;

      for (i = 1; i != n + 1; i++)
      {
          if (cin >> Request[i] && Request[i] < 0)
          {
              break;
          }
      }

      for (i = 0; i != n; i++)
      {
           if (Request[i] < Request[i + 1])
           {
               Time_Cost += up * (Request[i + 1] - Request[i]) + stp;
           }
           else if (Request[i] > Request[i + 1])
           {
               Time_Cost += down * (Request[i] - Request[i + 1]) + stp;
           }
           else
           {
               Time_Cost += stp;
           }

      }

      cout << Time_Cost << endl;
  }
   
  return 0;
}


