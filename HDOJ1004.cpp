#include <iostream>
using namespace std;
    
int  main()
{
    char test[1001][16];
    int n,i,j,k = 0;
    int count[1001];

    while(cin>>n)
    {
        i = 0;
        if (n == 0)
            break;
        
    memset(count,0,sizeof(int)*1001);

    for(i = 0;i <n; i++)
    {

        cin>>test[i];  
    
        for ( j = 0;j < i;j++)
        {
            
            if (strcmp(test[i],test[j]) == 0)
            {
                count[j]++;
                break;
            }
            
        }

        if (j == i)
            count[j]++;


    }

    int mark = 0; 
    int Max = count[0];
    for ( j = 1;j < n;j++)
    {

    //    cout<<count[j-1]<<endl;

        if (count[j]>Max)
        {
            mark = j;
            Max = count[j];
        }

    }
    
    cout<<test[mark]<<endl;

    }


  return 0;
}


