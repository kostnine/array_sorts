#include <iostream>

using namespace std;

void bubble_sort(int mas[], int N)
{
	int i,j,tmp;
	for(i = N-1; i >= 0; i--)
		for(j = 0; j < i; j++)
			if(mas[j] > mas[j+1])
			{
				tmp = mas[j+1];
				mas[j+1] = mas[j];
				mas[j] = tmp;
			}
	for(i = 0; i < N; i++)
	{
		cout << mas[i] << " ";
	}
	cout << endl;		
}

/*
Заводим временную переменную, сохраняем в нее наименьший элемент
позицию наибольшего элемента присваиваем позиции наибольшего элемента
наибольшему значению массива присваеваем значение которое было сохранено во временной переменой tmp
*/

int main(void)
{
	int N = 5;
	int mas[100] = {99, 5, 3, 48, 4};
	/*
	for(int i = 0; i < N; i++)
	{
		cin >> mas[i];
	}
	*/
	bubble_sort(mas, N);
	return 0;
}



