#include<iostream>
using namespace std;

int main()
{
	int i=0;
	int a[] = {23,12,34,56,78};
	int key = 34;
	int n = sizeof(a);

	for(i=0; i<n; i++)
	{
		if(a[i]==key)
		{
			cout<<"found at index: "<<i<<endl;
			break;
		}
	}

	if(i==n)
	cout<<"not found in array"<<endl;

	return 0;
}

