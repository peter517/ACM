 
#include <iostream>
using namespace std;

#include <time.h>

#define LEN 50

int Max  = 10;

int test[LEN];

void Swap(int &a,int &b)
{
   int temp ;

   temp = a;
   a = b;
   b = temp;
}

void Sort(int low,int high)
{
  int i = low + 1;
  int j = high;

  if (low >= high)
  {
	  return;
  }

  while (i < j)
  {
	  if (i < j && test[i] > test[low])
	  {
		  i++;
	  }

	  if (i < j && test[j] <= test[low])
	  {
		  j--;
	  }

	  if (test[i] <= test[low] && test[j] > test[low])
	  {
          Swap(test[i],test[j]);
	  }
  }

     if (test[low] < test[i])//边界处理
	 {
		  Swap(test[i],test[low]);
	 }

	 if (i == low + 1)//边界处理
	 {
		Max -= 1;
        Sort(low + 1,high);
		return;
	 }
	 
	if (i - low > Max )
		   {
		      Sort(low,i - 1);
			  return;
		   }
	   
	else if (i - low < Max )
		   {
		      Max = Max - (i - low);
			  Sort(i,high);	
			  return;
		   }
	else if (i - low == Max)
		  {
		      return;
		  }

}
	
int  main()
{
  srand(time(0));
  // int rd = rand() % 10000;
  //const int len = rd;
  int i;

  for (i = 0; i != LEN; i++)
  {
	  test[i] = rand() % 50;
     //test[i] = i + 1;
	  cout << test[i] << endl;
  }
  
  Sort(0,LEN -1);

  for (i = 0; i != LEN; i++)
  {
	  cout << "test[" << i <<"] = " ;
      cout << test[i] << endl;
  }

  return 0;
}

