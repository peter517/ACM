#include <iostream>
#include <math.h>

using namespace std;

int  main()
{  
    int n;
    long num;
    double sum;

    cin >> n;

    for (int i = 0; i != n; i++)
    {
        sum = 0.0;

        cin >> num;

        for (long j =1; j <= num; j++)
        {
            sum += log10(double(j));
        }

        cout << int(sum) + 1 << endl;
    }

    
  
    return 0;
}

