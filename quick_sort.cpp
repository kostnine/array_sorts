#include <iostream>

using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
	
}

int partition(int arr[], int low, int high)
{
	int pivot = arr[high];
	int i = (low - 1);
	for(int j = low; j <= high - 1; j++)
	{
		if(arr[j] <= pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i+1], &arr[high]);
	return (i + 1);
}

void quick_sort(int arr[], int low, int high)
{
	if(low < high)
	{
		int pi = partition(arr,low,high);
		quick_sort(arr, low, pi - 1);
		quick_sort(arr,pi + 1, high);
	}
	
}

void print_array(int arr[], int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << arr[i] << ' ';
	}
	cout << endl;
}

int main(void)
{
	int arr[] = {1,45,2,36,55,21,29,98,5};
	int n = sizeof(arr) / sizeof(arr[0]);
	print_array(arr, n);
	cout << endl;
	quick_sort(arr, 0, n - 1);
	cout << endl;
	print_array(arr, n);
	return 0;
}