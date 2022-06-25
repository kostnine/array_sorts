#include <iostream>

void count_sort(int A[], int n) // сортировка подсчётом
{
    
    int frequency_array[5] = {0}; // массив частот
    for(int i = 0; i < n; i++) {
        frequency_array[A[i]]++; // сколько раз встречается каждый A[i] 
    }
    int i = 0;
    for(int x = 0; x < 5; x++) { // пробегаем по всем возможным значениям чисел 
        for(int k = 0; k < frequency_array[x]; k++) { // сколько раз х нужно напечатать в A[i]. Столько раз, сколько он встречался в исходном A[]
            A[i] = x;
            i++;
        }
    }
}

void scan_array(int A[], int n,int m)
{
    for(int i = 0; i < m; i++)
        A[i] = rand() % m;
        
}

void print_array(int A[], int m)
{
    for(int i = 0; i < m; i++)
        std::cout << A[i] << ' ';
     std::cout <<  std::endl;
}

int main()
{
	int n = 5;
    int A[n];

    scan_array(A, n, 5);
    
    print_array(A, n);
    
    count_sort(A, n);
    
    print_array(A, n);

    return 0;
}