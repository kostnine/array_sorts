#include <iostream>

using namespace std;

void insert_sort(int mas[], int N) 
{
 	 int i,j, tmp;
	 for (i=1; i<N; i++)
	 {
	 	tmp=mas[i];
	 	for (j=i-1; j>=0 && mas[j]>tmp; j--)
	 		mas[j+1]=mas[j];
	
		 mas[j+1]=tmp;
 	}
}

void print_array(int mas[], int N)
{
	for(int i = 0; i < N; i++)
	{
		cout << mas[i] << '\t';	
	}
	cout << '\n';	
} 

int main()
{
	int N = 5;
	int mas[N] = {5,3,4,1,2};
	print_array(mas,N);
	insert_sort(mas,N);
	print_array(mas,N);
	return 0;
}