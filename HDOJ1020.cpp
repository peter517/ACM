#include <iostream>
#include <string>

#define MAX 10001

using namespace std;

int  main()
{  
    int n,k,flag;

    cin >> n;

    char test[MAX];

    for (int i = 0; i != n; i++)
    {
        cin >> test;

        flag = 0;
        k = 1;

        int len = strlen(test);

        if (len == 1)
        {
            cout << test << endl;
            continue;
        }

        for (int j = 1; j != len; j++)
        {

            if (test[j - 1] == test[j])
            {
                k = j;

                while (test[j - 1] == test[j])
                {
                         j++;
                }

                int sim_len = j - k + 1;

                cout << sim_len;

                cout << test[k - 1];

                if (j == len)
                {
                     flag = 1;
                     break;
                }

                else if (j == len - 1) 
                {
                     flag = 1;
                     cout << test[len - 1];
                     break;
                }

            }
            else
            {
                cout << test[j - 1];
            }
        }
           if (flag == 0)
            {
               cout << test[len - 1];
            }

        cout << endl;
    }
  
    return 0;
}

