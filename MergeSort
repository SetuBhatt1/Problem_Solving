
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define n 10

void merge(int a[],int lb,int mid,int ub)
{
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[n];
    
    while(i<=mid && j<=ub)
    {
        if(a[i]<=a[j])
        {
            b[k] = a[i];
            i++; k++;
        }
        
        else
        {
            b[k] = a[j];
            j++; k++;
        }
        
    }
    
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k] = a[j];
            j++; k++;
        }
    }
    
    else
    {
        while(i<=mid)
        {
            b[k] = a[i];
            i++; k++;
        }
    }
        
    for(int i=lb; i<=ub; i++)
    {
        a[i] = b[i];
    }
}

void mergesort(int a[],int lb,int ub)
{
    int mid;
    
    if(lb<ub)
    {
        mid = (lb+ub)/2;
        mergesort(a,lb,mid);
        mergesort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}

int main()
{
    int my_array[10];
    srand(time(0)); 

  
    for (int i = 0; i < 10; i++) 
    {
        my_array[i] = rand() % 100; 
    }

 
    cout<<"unsorted array:";
    for (int i = 0; i < 10; i++)
    {
        cout << my_array[i] << " ";
    }
    cout << endl;
    
   mergesort(my_array, 0, n-1);
    
    cout<<"sorted array:";
    for (int i = 0; i < 10; i++)
    {
        cout << my_array[i] << " ";
    }
    cout << endl;
 
    return 0;
}
