 
#include <iostream>
#include <iomanip>
using namespace std;

double Sum = 0;

double factorial(double i)
{

   if (i == 0)
   {
       return 1.0;
   }
   else
   {
      return i * factorial(i - 1);
   }
 

}
    
int  main()
{
  cout << "n" << " " << "e" << endl;
  cout << "- -----------" << endl;

  for (int i = 0; i != 10; i++)
  {
      Sum += 1 / factorial(i);
      
      if (i > 2)
      {
      cout << setiosflags(ios::fixed);
      cout <<  i << " " << setprecision(9) << Sum << endl;
      }
      else
      {
        cout <<  i << " " << Sum << endl;
      }
  }
 

  return 0;
}


