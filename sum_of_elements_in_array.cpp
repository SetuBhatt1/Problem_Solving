
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define n 6

int sum (int a[])
{
    
  int sum=0;
  for(int i=0; i<n; i++)
  {
   sum=sum+a[i]; 
  }
  return sum;

}

int main()
{
    int a[n];
    srand(time(NULL));
  
    for(int i=0; i<n; i++)
    {
        a[i]=rand()%100;
    }
  
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
  
    cout<<endl;
  
    int ans = sum(a);
    cout<<ans;

    return 0;
}
