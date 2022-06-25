#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//считывание
	int n;
	cin >> n;
	vector <int> a;
	for(int i = 0; i < n; i++)
	{
		int temp;
		cin >> temp;
		a.push_back(temp);
	}
	
	// обработка
	for(int j = 0; j < n; j++) // начиная с какого номера ищем наименьший
	{
		int min = j; // номер минимального элемента
		for(int i = j; i < n; i++) // ищем только в еще не упорядоченной части
		{
			if(a[i] < a[min])
			{
				min = i;
			}
		}
			
		int temp;
		temp = a[j];
		a[j] = a[min];
		a[min] = temp;
	}
	
	for(auto res : a)
	{
		cout << res << ' ';	
	}
		
	return 0;
	
}