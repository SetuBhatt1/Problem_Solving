#include <iostream>
using namespace std;
#define n 6

void printArr(int a[])
{
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<"  ";
    }
    
    cout<<endl;
}

void selectionSort(int a[], int n1) {
    int i, j, min;
    
    for (i = 0; i < n1-1; i++)
    {
        min = i;
        for (j = i+1; j < n1; j++)
        {
            if (a[j] < a[min])
                min = j;
        }
        swap(a[min], a[i]);
    }
}

int main()
{
    int a[] = {100,1,22,33,44,66};
    
    cout<<"before sort: ";
    printArr(a);
    
    selectionSort(a,n);
    
    cout<<"after sort: ";
    printArr(a);
    
    return 0;
}


