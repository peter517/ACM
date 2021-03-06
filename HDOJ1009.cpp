#include <iostream>
using namespace std;

#include <iomanip>

void Swap( double &a, double &b )
{
  double temp = 0.0;

         temp = a;
         a = b;
         b = temp;

}

    
int  main()
{
  double N,M;
  double J[1001],F[1001],V[1001];
  int i,j;
   
  while (cin >> M >> N && (M != -1 || N != -1) /*&& (M >= 0 && N >=0)*/)
  {
      memset(J,0,sizeof(double) * 1001);
      memset(F,0,sizeof(double) * 1001);
      memset(V,0,sizeof(double) * 1001);

      for (i = 0; i != N; i++)
      {
          cin >> J[i] >> F[i];
          V[i] = (double)J[i] / (double)F[i];
      }
    
    for (i = 0; i != N; i++)
    {
        for (j = N -1; j != i; j--)
        {
            if (V[j] > V[j - 1])
            {
                Swap(V[j],V[j - 1]);
                Swap(F[j],F[j - 1]);
                Swap(J[j],J[j - 1]);
            }
        }
    }

    double Max_J = 0.0;

    for (i = 0; i != N; i++)
    {
      if(M - F[i] >= 0)
      {
          M = M - F[i];
          Max_J += J[i];
      }
      else
      {
          Max_J += M * V[i];
          break;
      }
    }

   cout << setiosflags(ios::fixed);
   cout << setprecision(3) << Max_J << endl;
  }

  return 0;
}


