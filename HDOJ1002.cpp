#include <iostream>
using namespace std;

void f(int len_b,int len_a,char *b ,char *a );
char a_big[1000][1000],b_big[1000][1000];
char Ten = '5'+'5'-'0';

void main()
{

int n,len_a,len_b,i;
while(cin>>n)
{
if(n>=1&&n<=20)
{
for (i=0 ;i<n; i++)
cin>>a_big[i]>>b_big[i];

for (i=0 ;i<n; i++)
{
    len_a = strlen(a_big[i]);
    len_b = strlen(b_big[i]);

    if (len_b>=len_a)
    {
    cout<<"Case "<<i+1<<":"<<endl;
    cout<<a_big[i]<<" + "<<b_big[i]<<" = ";

    f(len_b,len_a,b_big[i],a_big[i]);
    cout<<b_big[i]<<endl;

    if(i!=n-1)
    cout<<endl;
    }

    else    
    {
    cout<<"Case "<<i+1<<":"<<endl;
    cout<<a_big[i]<<" + "<<b_big[i]<<" = ";

    f(len_a,len_b,a_big[i],b_big[i]);
    cout<<a_big[i]<<endl;

    if(i!=n-1)
    cout<<endl;
    }
}
}
}

}

void f(int len_b,int len_a,char *b,char * a)
{
    
    for(int j=1; j<=len_a; j++)
    {
        b[len_b-j] += a[len_a-j]-'0';
        if (b[len_b-j]>=Ten&&j!=len_a)
        {
            b[len_b-j] = b[len_b-j]-(Ten-'0');
            b[len_b-j-1] += '1'-'0';
        }
    }
    if (b[len_b-len_a]>=Ten)
    {   
        b[len_b-len_a] = b[len_b-len_a]-(Ten-'0');
        if (len_b==len_a)
        { 
             for (int k=len_b-1;k>=0;k--)
             {
              b[k+1]=b[k];
             }
            b[0] = '1';
        }
         else
        {
             b[len_b-len_a-1] += '1'-'0'; 
        }
      }
}
