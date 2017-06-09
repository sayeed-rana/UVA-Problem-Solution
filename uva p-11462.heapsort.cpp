// C++ program for implementation of Heap Sort
#include <iostream>
using namespace std;

void heapify(int arr[], int n, int i)
{
	int largest = i;
	int l = 2*i + 1;
	int r = 2*i + 2;


	if (l < n && arr[l] > arr[largest])
		largest = l;

	if (r < n && arr[r] > arr[largest])
		largest = r;


	if (largest != i)
	{
		swap(arr[i], arr[largest]);


		heapify(arr, n, largest);
	}
}

void heapSort(int arr[], int n)
{

	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);


	for (int i=n-1; i>=0; i--)
	{

		swap(arr[0], arr[i]);

		heapify(arr, i, 0);
	}
}
void printArray(int arr[], int n)
{
for(int j=0;j<n;j++)
   {
       if(j==n-1)
       {
         cout<<arr[j];
       }
       else cout<<arr[j]<<" ";

   }
   cout<<"\n";

}

int main()
{

        int n;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        else
        {
    int arr[n],temp=0;
    for(int k=0;k<n;k++)
    {
    cin>>arr[k];
    }

	heapSort(arr, n);
	printArray(arr, n);
}
}
return 0;
}

