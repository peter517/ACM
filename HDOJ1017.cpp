#include <iostream>

using namespace std;

int  main()
{
    int n,m,k;

    cin >> k;

for (int i = 1; i <= k; i++)
{
        if (i > 1)
        {
            cout << endl;
        }
    
    int num = 0;

    while (cin >> n >> m && !(n == 0 && m == 0))
    {
        num++;
        int count = 0;
        for (int a = 1; a != n; a++)
        {
            for (int b = a + 1; b != n; b++)
            {
                   if ((a * a + b * b + m) % (a * b) == 0 )
                   {
                       count++;
                   }
            }
        }

        printf("Case %d: %d\n",num,count);
    }
}

    return 0;
}

