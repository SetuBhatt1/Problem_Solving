#include <iostream>
using namespace std;
#define n 6

void printArr(int a[])
{
    for(int i=0; i<6; i++)
    {
        cout<<a[i]<<"  ";
    }
    
    cout<<endl;
}

void bubbleSort(int a[])
{
    for(int i=0; i<n; i++)
    {
        int sf = 0;
        for(int j=0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            swap(a[j], a[j+1]);
            sf = 1;
        }
        
        
        if(sf==0)
        {
         break;
        }
    }
    
}

int main()
{
    int a[]={100,99,88,77,66,55};
    
    cout<<"before bubble sort: ";
    printArr(a);
    
    bubbleSort(a);
    
    cout<<"after bubble sort: ";
    printArr(a);
    
    return 0;
}
