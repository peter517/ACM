#include <iomanip>
#include <iostream>
#include <math.h>

using namespace std;

struct pos{
    float x;
    float y;
};

float Find_Min(pos test[],long i,long n)
{
  float Min = 10000000;
  int j;

  float buf = 0;

  for (j = i + 1; j != n; j++)
  {
     buf = sqrt((test[i].x - test[j].x) *(test[i].x - test[j].x) +
          (test[i].y - test[j].y) *(test[i].y - test[j].y));

      if (buf < Min)
      {
          Min = buf;
      }
  }

  return Min;

}
    
int  main()
{
  long n;
  int i;
  pos test[100000];

  float radius = 10000000;
  float buf = 0;

  cin >> n;

  if (n >=2 && n<= 100000 && n != 0)
  {

   for (i = 0; i != n; i++)
   {
     cin >> test[i].x >> test[i].y;
   }

   for (i = 0; i != n; i++)
   {
      buf = Find_Min(test,i,n);

      if (buf < radius)
      {
          radius = buf;
      }
   }
  
  cout << setiosflags(ios::fixed);

  cout << setprecision(2) << radius / 2 << endl;

 }

  return 0;
}


