
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int sum (int arr[], int n)
{
    if(n==1)
    return arr[n];
    else
    return arr[n]+sum(arr,n-1);
}

int main()
{
    int n=6;
    int a[n];
    srand(time(NULL));
  
    for(int i=1; i<=n; i++)
    {
        a[i]=rand()%100;
    }
  
    for(int i=1; i<=n; i++)
    {
        cout<<a[i]<<" ";
    }
  
    cout<<endl;
  
    int ans = sum(a,n);
    cout<<ans;

    return 0;
}
