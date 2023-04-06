#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
#define n 10

int partition(int a[], int lb, int ub)
{
    int pivot=a[lb];
    int i=lb;
    int j=ub;
    
    while(i<j)
    {
        while(a[i]<=pivot)
        i++;
        
        while(a[j]>pivot)
        j--;
        
        if(i<j)
        swap(a[i],a[j]);
    }
    
    swap(a[lb],a[j]);
    
    return j;
}

void quicksort(int a[], int lb, int ub)
{
    if(lb < ub)
    {
        int loc=partition(a, lb, ub);
        quicksort(a,lb,loc-1);
        quicksort(a,loc+1,ub);
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
        cout << my_array[i] <<" ";
    }
    cout << endl;
    
    quicksort(my_array,0,n-1);
    
    cout<<"sorted array:";
    for (int i = 0; i < 10; i++)
    {
        cout << my_array[i] << " ";
    }
    cout << endl;
    
    return 0;
}
