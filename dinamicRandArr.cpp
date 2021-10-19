#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
setlocale (LC_ALL, "russian");
//определяем величину массива
int n;
int x = 20;
cout << "Введите размер массива" << endl;
cin >> n;

//выделяем динамическую память под массив
int* arr = new int [n];

srand(time(NULL));
	for (int i = 0; i < n; i++)
		
		arr[i] = rand()%(2*x+1) - x;
		cout << arr[i] << "  ";	

	return 0;
}