#include <iostream>

using namespace std;

/*const int SIZE = 15;

int minNum(int array[SIZE]);
void printArray(int mas[SIZE]);
void inputArray(int mas[]);
int sumMinus(int mas[]);
void randomizeArray(int mas[]);
void randomizeArray(int mas[], int x);
int maxElemArray(int mas[SIZE]);
int maxNum(int array[SIZE]);
int numOfEntersX(const int mass[SIZE], int x);
int numNearestToX(int mass[SIZE], int x);
void changeMaxMin(int array[SIZE]);
float middleAr(int mass[SIZE]);
void diffOfMiddle(int mass[SIZE]);*/



int main()
{   
	setlocale(LC_ALL, "rus");
	//Объявление переменной массива, хранящейся в статической памяти
	
	int massN[n] = {s};
	int massK[k];
	int count = 0;//счетчик кол-ва вхождений шифра
	
	cout << " введите n " << endl;
	cin >> n;
	cout << " введите k " << endl;
	cin >> k;
	cout << endl;
	cin >> s;
		 
	int a = 0;//kол-во элементов массива k:
	for (i=0;i<k;i++){
		a++;
	}

	//проход по массиву n
	for (i=0;i<n;i++)
	{
		if (massN[i] + (a-1) == massK[k])
			count++;
		
	}




	//обнуление всех элементов массива
	/*for (int i = 0; i < SIZE; i++)
		massive[i] = 0;*/
	//эксперименты с отдельными эл-ми
	massive[0] = 123;
	*massive += 2;
	cout << massive[0] << endl;
	massive[SIZE - 1] = 444;
	*(massive + SIZE - 1) *= 2;
	cout << massive[SIZE-1] << endl;
	cout << endl << endl;
	//printArray(massive);
	//inputArray(massive);
	//randomizeArray(massive);
	randomizeArray(massive,20);
	printArray(massive);
	cout << "сумма отрицательных элементов = " << sumMinus(massive) << endl;

	cout << "maximum = " << maxElemArray(massive) << endl;
	cout << "номер минимума " << minNum(massive) << endl;
	changeMaxMin(massive);
	printArray(massive);
	int x;	
	cout << "Введите число x: " << endl;
	cin >> x;
	cout << "число " << x << " встречается " << numOfEntersX(massive, x) << " раз" << endl;
	cout << "Введите число y: " << endl;
	cin >> x;
    cout << "ближайший к " << x << " элемент под номером " << numNearestToX(massive, x) << endl;
	cout << "среднее арифметическое элементов массива за искл. двух максимальных: " << middleAr(massive) << endl;
	cout << endl;
	diffOfMiddle(massive);

	float z = float(x) + 15;

	Elephant rama;
	rama.name = "Rama I";
	rama.name[0] = 'H';
	Elephant elephants[SIZE];
	elephants[3] = rama;
	elephants[2].name = elephants[3].name + 'I';
	elephants[2].name[1] = 'o';

	Elephant* pRama = &rama;
	pRama->age = 112;						//(*pRama).age = 112;
	(elephants[2]).age = pRama->age++;		//pRama->age = 113;  elephants[2].age =112
	elephants[1].age = ++elephants[2].age;  //elephants[2].age = 113;  elephants[1].age =113

	elephants[1].p = &elephants[2];
	
	//cout <<( x< 10);

	return 0;
}

void printArray(int mas[SIZE])
{//вывод поэлементно всего массива
	
	for (int i = 0; i < SIZE; i++)
		cout << mas[i] << " ";
	cout << endl;
}

//0 Вввод массива поэлементно
void inputArray(int mas[])
{
	cout << "Введите массив целых чисел длины " << SIZE << endl;
	for (int i = 0; i < SIZE; i++)
		cin >> mas[i];
}
//1 Найти сумму элементов массива
//2 Найти сумму отрицательных элементов массива
int sumMinus(int mas[])
{
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
		if(mas[i]<0)
			sum += mas[i];
	return sum;
}

//10 заполнить массив случайными числами
void randomizeArray(int mas[])
{
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
		mas[i] = rand();
}
//10a заполнить массив случайными числами в диапазоне от -x до +x
void randomizeArray(int mas[], int x)
{
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
		//mas[i] = rand()%(x+1);	// случ числа в диапазоне от 0 до x
		mas[i] = rand()%(2*x+1) - x;	// случ числа в диапазоне от -x до x
}

//3 Найти максимальный элемент массива
int maxElemArray(int mas[SIZE]) //3
{
	//int max = LONG_MIN ;
	int max = mas[0];
	for (int i = 1; i < SIZE; i++) {
		if (mas[i] > max) {
			max = mas[i];
		}
	}
	return max;
}
//4 найти номер минимального элемента
int minNum(int array[SIZE]) {
	//int min = array[0];
	int num = 0;
	for (int i = 0; i < SIZE; i++) {
		if (array[i] < array[num]) {
			//min = array[i];
			num = i;
		}
	}
	//cout << num + 1 << endl;
	return num;
}
//4.1 найти номер максимального элемента
int maxNum(int array[SIZE]) {
	int max = array[0];
	int num = 0;
	for (int i = 0; i < SIZE; i++) {
		if (array[i] > max) {
			max = array[i];
			num = i;
		}
	}	
	return num;
}
//5 Поменять местами минимальный и максимальный элементы массива
void changeMaxMin(int array[SIZE]) {
	int imin = minNum(array);
	int imax = maxNum(array);
	
	int t = array[imin];
	array[imin] = array[imax];
	array[imax] = t;
	/*бинарное сложение - работает, но нечитаемо
	array[imin] = array[imin] ^ array[imax];
	array[imax] = array[imin] ^ array[imax];
	array[imin] = array[imin] ^ array[imax];*/
}

//6 Найти количество вхождений числа x в массив 
int numOfEntersX(const int mass[SIZE], int x)
{
	int counter = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (mass[i] == x)
			counter++;
	}
	return counter;
}
//7 найти номер элемента, наиболее близкого к числу x
int numNearestToX(int mass[SIZE], int x)
{	
	int iNearest = 0;
	
	for (int i = 1; i < SIZE; i++)
	{

		if (abs(x - mass[i]) < abs( x - mass[iNearest]))

			iNearest = i;

	}
	return iNearest;
}
//8 найти среднее арифметическое всех элементов массива, за исключением двух максимальных

float middleAr(int mass[SIZE])
{
	float midAr = 0.0;
	float sumArr = 0.0;
	
	int max1 = mass[0];
	int max2 = 0;
	int num1 = 0;
	int num2 = 0;
		//находим номер максимального элемента
	for (int i = 0; i < SIZE; i++) {
		if (mass[i] > max1) {
			max1 = mass[i];
			num1 = i;
			
		}
	}
	//находим номер второго максимального элемента
		for (int i = 0; i < SIZE; i++) {
			if (mass[i] > max2 && i != num1) {
				max2 = mass[i];
				num2 = i;
			}
			else if (mass[i] < max2 || i == num1)
				continue;
		}
					// считаем сумму всех эл-тов
				for (int i = 0; i < SIZE; i++)
				{
					sumArr += mass[i];
				}
				// считаем ср.арифм без 2-х макс.элем-тов
		midAr = (sumArr - max1 - max2) / (SIZE-2);
	return midAr;
}

//9 найти отклонение (в процентах) каждого элемента от среднего значения

void diffOfMiddle(int mass[SIZE])
{
	float midAr = middleAr(mass);//используем ф-ию нахождения ср.апифметического из зад.8
	float delta = 0.0;
	int diffper = 0;
	for (int i = 0; i < SIZE; i++)
	{
		delta = midAr - mass[i];//находим разность между ср.арифм. и текущим значением элемента
		diffper = abs(delta * 100 / midAr); // отклонение в %
		cout << "отклонение элемента " << i << " от среднего значения составит: "<< diffper << "%" << endl;
		cout << "==============================================================" << endl;
	}
	
}