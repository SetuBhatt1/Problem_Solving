#include <iostream>
using namespace std;
#define n 5

int a1[n][n];

void printMatrix(int a[][n])
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

void initMatrix(int a[][n])
{
    for(int i=1; i<=n; i++)
    {
        for(int j=1;j<=n; j++)
        {
            a[i][j] = 0;
        }
    }
}

void addEdge(int u, int v)
{
    a1[u][v] = 1;
    a1[v][u] = 1;
}

int main()
{
    initMatrix(a1);
    
    addEdge(1,2);
    addEdge(1,4);
   
    addEdge(2,3);
    addEdge(2,4);
    
    addEdge(3,4);
    addEdge(3,5);
   
    addEdge(4,5);
   
    printMatrix(a1);
    
    return 0;
}
