#include <iostream>

using namespace std;

int output_list[20] = {0,1};
int n;

int Isprimer(int a)
{
    for (int i = 2; i != a; i++ )
    {
        if (a % i == 0)
        {
            return 0;
        }
    }

    return 1;

}

void find_list(int len)
{
    int i,j;

    if (len == n + 1)
    {
        if (Isprimer(output_list[n] + 1))
        {
            for (i = 1; i != n ; i++)
            printf("%d ",output_list[i]); //最后一项不带空格的回车 

            printf("%d\n",output_list[n]);
            return;
        }
        else
        return;
    }
    else
{
    for (i = 2; i != n + 1; i++)
    {
        for (j = 2; j != len; j++)
        {
            if (output_list[j] == i)
            {
                break;
            }
        }

        if (j >= len)
        {
            if (Isprimer(output_list[len - 1] + i))
            {
                output_list[len] = i;
                find_list(len + 1);
            }
            
        }

    }
  }
  
    
}

int  main()
{

    int counter = 1;
    while (scanf("%d",&n)==1)
    {
         printf("Case %d:\n",counter++);

         find_list(2);

         cout << endl;
    }

    return 0;
}

