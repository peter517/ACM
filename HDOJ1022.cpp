#include<iostream>

#define MAX 10

using namespace std;

int main()
{
    char in[MAX],out[MAX],stack[MAX];
    int flag[2 * MAX];

    int n,i,j,k,top;

    while (cin >> n)
    {

        for (i = 0; i != n; i++)
        {
            cin >> in[i];
        }

        for (i = 0; i != n; i++)
        {
            cin >> out[i];
        }

        i = 0;
        j = 0;
        k = 0;
        top = -1;

        while (i < n + 1  && j < n)
        {

            if (stack[top] == out[j] && top != -1)
            {
               top--;
               flag[k++] = 0;
               j++;
            }
            else
            {
                stack[++top] = in[i++];
                flag[k++] = 1;
            }
        }

        if (k != 2 * n)
        {
            cout << "No.\nFINISH" << endl;
        }
        else
        {
            cout << "Yes." << endl;
            for (i = 0; i != k; i++)
            {
                if (flag[i] == 1)
                {
                    cout << "in" << endl;
                }
                else
                {
                    cout << "out" << endl;
                }
            }
            cout << "FINISH" << endl;
        }
    }

    return 0;
}

