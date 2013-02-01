
#include <iostream>
using namespace std;

#define LENGTH 10000

int  main()
{  
 
   long n,num,i,j,k,m;

   int sum[LENGTH],buf[LENGTH];

   cin >> n;

   for (m = 0; m != n; m++)
   {
	   cin >> num;

       memset(sum, 0, sizeof(int) * LENGTH);
	   memset(buf, 0, sizeof(int) * LENGTH);

	   sum[1] = 1;
        
	   for (i = 2; i <= num; i++)
	   {
		   memcpy(buf,sum,LENGTH);

		   for (j = 1; j != i; j++)
		   {
                for (k = LENGTH - 1; k >= 1; k--)
                {
					    sum[k] = sum[k] + buf[k]; 

						if (sum[k] >= 10)
						{
							sum[k + 1]++;
							sum[k] -= 10;
						}
					
                }
		   }
	   }

	   for (i = LENGTH - 1; i >= 1; i--)
	   {
		   if (sum[i] != 0)
		   {
			   cout << i << endl; 
			   break;
		   }
	   }
   }

	return 0;
}
