#include <iostream>

using namespace std;


int Search_Binary(int arr[], int low, int high, int key)
{
	int mid;
	while(low <= high)
	{
		mid = (low + high) / 2;
		if(key < arr[mid]) high = mid - 1;
		else if(key > arr[mid]) low = mid + 1;
			else return mid;
	}
	return -1;
}

int main()
{
	const int size = 100;
	int arr[size] = {};
	int key;
	int high = size - 1;
	int index;
	for(int i = 0; i < size; i++)
	{
		arr[i] = i + 1;
		cout << arr[i] << " ";
	}
	cout << endl;
	cin >> key;
	index = Search_Binary(arr, 0, high, key);
	if(index >= 0)
		cout << index << endl;
	else
		cout << "nety";	
	return 0;
}