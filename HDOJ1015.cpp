 
#include <iostream>
#include <string.h>
#include <math.h>

#define MAX 10000


using namespace std;

int  main()
{
    long int n;
    char test[MAX],T[MAX];

    long b1,b2,b3,b4,b5;

   while(cin >> n >> test && n != 0 || strcmp(test,"END") != 0)
   {
    
    char res[6];
    memset(res,0,sizeof(res));

    int len = strlen(test);

    int s = 0;

    for (int i = 0; i !=len; i++ )
    { 
        for (int j = 0; j !=len; j++ )
        {
            if (j != i)
            for (int k = 0; k !=len; k++ )
            {    
                if (k != i && k != j)
                for (int l = 0; l !=len; l++ )
                {
                    if (l !=i && l !=j && l!= k)
                    for (int m = 0; m !=len; m++ )
                    {
                        if (m !=i && m !=j && m!= k && m !=l)
                        {
                            b1 = test[i] - 64;
                            b2 = pow(test[j] - 64,2);
                            b3 = pow(test[k] - 64,3);
                            b4 = pow(test[l] - 64,4);
                            b5 = pow(test[m] - 64,5);

                        if (b1 - b2 + b3 -b4 + b5 == n)
                        {
                            T[0] = test[i];
                            T[1] = test[j];
                            T[2] = test[k];
                            T[3] = test[l];
                            T[4] = test[m];
                            T[5] = '\0';
                            
                            s++;

                           if(strcmp(T,res)>0)
                           strcpy(res,T);


                        }
                        }
                    }
                }
            }
        }
    }

    if (s == 0)
    {
      cout << "no solution" << endl;
    }
    else
    {
      cout << res << endl;
    }
  }
    return 0;
}


