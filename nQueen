
#include <iostream>
using namespace std;
#define n 7

void initA(int a[n][n])
{
   for(int i=0; i<n; i++)
   {
      for(int j=0; j<n; j++)
      {
         a[i][j] = 0;
      } 
   } 
}
void printA(int a[][n])
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool isSafe(int a[n][n], int x, int y)
{
    //column threat
    for(int row=0; row<x; row++)
    {
        if(a[row][y]==1)     
        return false;
    }
    
    int row=x;
    int col=y;
    
    //left diagonal threat
    while(row>=0 && col>=0)
    {
        if(a[row][col] == 1)
        {
            return false;
        }
        
        col--; row--;
    }
    
    row=x;
    col=y;
    
    //right diagonal threat
    while(row>=0 && col<n)
    {
        if(a[row][col] == 1)
        {
            return false;
        }
        
        col++; row--;
    }
    
    return true;
}

bool nQueen(int a[n][n], int x)
{
    if(x>=n)
    return true;
    
    for(int col=0; col<n; col++)
    {
        if(isSafe(a,x,col))
        {
            a[x][col]=1;
            
            if(nQueen(a,x+1))
            {
                return true;
            }
            
            a[x][col]=0;  //backtracking
        }
    }
    
    return false;
}

int main()
{
    int a[n][n];
    initA(a);
    
    if(nQueen(a,0))
    {
        printA(a);
    }
    
    else
    {
        cout<<"no solution possible"<<endl;
    }

    return 0;
}
