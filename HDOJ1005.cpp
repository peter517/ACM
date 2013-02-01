#include <iostream>
using namespace std;

    
int  main()
{
   int A,B,f[2001];
   long n;

   f[1] = f[2] = 1;
   
   while (cin >> A >> B >> n)
   {

   if (A == 0 && B == 0 && n == 0)
       break;

   if (n<3)
   {
       cout << "1" <<endl;
   }
   else
   {
       for (int i =3; i<2000 ; i++)
       {
           f[i] = (A * f[i - 1] + B * f[i - 2]) % 7;
       
           if (f[i] == 1 && f[i - 1] == 1)
              break;
       }

//       cout << i - 2 << endl;

       n = n % (i-2);

       if (n == 0)
       {
           n = i-2;
       }
       cout << f[n] << endl;
   }

   }

  return 0;
}


