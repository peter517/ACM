#include <iostream>
#include <math.h>

using namespace std;

int  main()
{  
    int n,fn;

while(cin >> n)
{
    int f0 = 7,f1 = 11;
    if (n == 0)
    {
       cout << "no" << endl;
    }
    else if (n == 1)
    {
       cout << "no" << endl;
    }
    else
    {    
        for (int i = 1; i != n; i++)
        {
           fn = f0 % 3 + f1 % 3;
           f0 = f1 % 3;
           f1 = fn % 3 ;
        }

          if (fn % 3 == 0)
          {
            cout << "yes" << endl;
          }
          else
          {
            cout << "no" << endl;
          }
    }
}
  
    return 0;
}

