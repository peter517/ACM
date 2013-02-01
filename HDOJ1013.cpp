 
#include <iostream>
using namespace std;

char Ten = '5'+'5'-'0';

int T0_Single(int i)
{
   long Sum = 0;
   while (i != 0)
   {
       Sum += i % 10;
       i = i / 10;
   }
   if (Sum < 10)
   {
       return Sum;
   }
   else
   {
       return T0_Single(Sum);
   }

}
    
int  main()
{
  char test[1000];

  while (cin >> test && test[0] != '0')
  {
      char c = test[0];
      int len = strlen(test);
      int test_out = 0;

      for (int i = 1; i != len; i++)
      {
          c += test[i] - '0';
          if (c >= Ten)
          {
              test_out += 10;
              c -= Ten - '0';
          }
          if (i == len - 1)
          {
              test_out += int(c) - 48;
          }
      }
        if (len == 1)
        {
            cout << int(test[0]) - 48 << endl;
        }
        else
        {
            cout << T0_Single(test_out) << endl;
        }
  }

  
  return 0;
}


