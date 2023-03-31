#include <iostream>
#include <algorithm>
using namespace std;

#define n 6

int binSearch(int a[], int key)
{
    int l = 0;
    int h = n-1;
    
    while(l<=h)
    {
        int mid = (l+h)/2;
        
        if(key ==  a[mid])
        return mid;
        
        else if(key > a[mid])
        l=mid+1;
        
        else
        h=mid-1;
    }
    
    return -1;
}

int main()
{

    int a[6]={12,23,34,15,54,67};
    int arraySize = sizeof(a) / sizeof(a[0]);
    
    cout<<"before sorting: ";
    
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    sort(a, a+arraySize);
    
    cout<<"after sorting: ";
    
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    
    int index = binSearch(a,12);
    cout<<"found at index: "<<index<<endl;
    
    return 0;
}
