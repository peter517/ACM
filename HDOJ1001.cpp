#include <iostream>
using namespace std;

void main()
{
  long n,sum;

  while(cin>>n)
 {
     sum = 0;
  for (long i=1;i<=n;i++)
  {
     sum += i;
  }
  cout<<sum<<endl<<endl;
 }
}
