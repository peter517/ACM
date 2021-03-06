#include <iostream>
#include <math.h>
using namespace std;

int run_away = 0;

int N ;
int M ;

int step;
int di ,dj ,inew ,jnew;

char maze[8][8];

int move[4][2]={{1,0},{-1,0},{0,-1},{0,1}};

void Test(int si,int sj,int k)
{

   int i;

   if(si == di && sj == dj && k == step)    
   {                 
       run_away = 1;          
       return ;          
   }

   int temp = step - k - (abs(si-di)+abs(sj-dj));

   if(temp < 0 || temp & 1)       
   {           
       run_away = 0;
       return;    
   }  

  for(i = 0; i < 4; i++)   
  { 

    inew = si + move[i][0];   
    jnew = sj + move[i][1];  
  
  if((maze[si + move[i][0]][sj + move[i][1]] != 'X' ) && (inew >= 0 && inew < N) && ( jnew >= 0 && jnew < M))     
  {                 
    maze[si + move[i][0]][sj + move[i][1]] = 'X';    
    Test(inew,jnew,k + 1);       

    maze[si + move[i][0]][sj + move[i][1]] = '.';   
  } 
  if (run_away)
  {        
      break;  
  } 
  }

  }
    
int  main()
{
  int i,j;

  int si = 0,sj = 0;

  int wallnum = 0;

  while ( cin >> N >> M >> step && !(N == 0 && M == 0 && step == 0))
  {
      for (i = 0; i != N; i++)
      {
          for (j = 0; j != M; j++)
          {
              cin >> maze[i][j];
         
          if (maze[i][j] == 'S')
          {
              si = i;
              sj = j;
              maze[i][j] = 'X';
          }
          else if (maze[i][j] == 'D')
          {
              di = i;
              dj = j;
          }
          else if (maze[i][j] == 'X')
          {
              wallnum++;
          }
           }
      }


  if (!(N * M - wallnum < step))      
  {
    Test(si,sj,0);
  }

  if (run_away == 0)
  {
      cout << "NO" << endl;
  }
  else
  {
      cout << "YES" << endl;
  }

  run_away = 0;
  wallnum = 0;
}
  return 0;
}


