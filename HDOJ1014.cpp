 
#include <iostream>
using namespace std;
    
int  main()
{
  long STEP = 0,MOD = 0;
  while (cin >> STEP >> MOD && STEP != -1 && MOD != -1)
  {
      
   long seed_a = 0,seed_b = -1;
   long seed = 0;
   long i =0;
//    memset(seed,0,sizeof(long) * 100000);
   for(i = 0; seed != seed_b; i++)
    {
        seed_b = (seed_a + STEP) % MOD;
        seed_a = seed_b;
    }
 //  printf( "%10ld ",STEP);
 //  printf( "%10ld ",MOD);
   if (i == MOD)
   {
       printf("%10ld%10ld    Good Choice\n\n",STEP,MOD);

    //  printf("    Good Choice");
   }
   else
   {
   //  printf("    Bad Choice");
       printf("%10ld%10ld    Bad Choice\n\n",STEP,MOD);
   }
//   printf("\n\n");       
  }

  //cout << i << endl;
  return 0;
}


