#include <iostream>
#include <math.h>

#define MAX 10000

using namespace std;

__int64 gcd(__int64 a, __int64 b)
{
   if (a > b)
   {
       if (b == 1)
       {
           return 1;
       }
       else if (b == 0)
       {
           return a;
       }
       else
       {
           return gcd(b,a % b);
       }
   }

   else
   {
       if (a == 1)
       {
           return 1;
       }
       else if (a == 0)
       {
           return b;
       }
       else
       {
           return gcd(b % a,a);
       }
   }
}

int  main()
{  
    int n,num_n;
    __int64 min_common_multiple = 0;

    int buf[MAX];

    cin >> n;

    for (int i = 0; i != n; i++)
    {
       memset(buf, 0, sizeof(int) * MAX);

       cin >> num_n;

       for (int j = 0; j != num_n; j++)
       {
           cin >> buf[j];
       }

       min_common_multiple = buf[0];

       for (int k = 1; k != num_n; k++)
       {
           min_common_multiple = min_common_multiple * buf[k] / gcd(min_common_multiple,buf[k]);
       }
       
       printf("%I64d\n",min_common_multiple);
    }
  
    return 0;
}

