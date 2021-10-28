#include<iostream>
#include <iomanip>
using namespace std;


const unsigned int MASS1 = 101;
const unsigned int MASS2 = 101;
const unsigned char SIZE = 50;

void leftRot(int matr[i][j]);		 // ф-я поворота налево
void rightRot(int matr[i][j]);      // ф-я поворота направо



int main()
{
	setlocale(LC_ALL, "rus");

	int count = 0;				//счетчик ходов
	int botPlace[MASS1][MASS2]; //задаем матрицу поля для перемещений
	

	/*int tracker[MASS1][MASS2];*/   //задаем массив для записи координат пройденного пути
	
	char prog[SIZE];              // входные данные - массив char 

	cout << "введите программу: ";

	cin >> prog[SIZE];

	for (int i = 0; i < MASS1; i++){			//заполняем матрицу нулями
		for (int j = 0; j < MASS2; j++) {
				botPlace[i][j] = 0;
			}
	}

	botPlace[i][j] = botPlace[50][50]; //определяем стартовое положение робота
	
	while (botPlace[i][j] != 1) {
		for (int k = 0; k < SIZE; k++) {

			if (prog[k] == 'L')
				leftRot(botPlace[i][j]);
			if (prog[k] == 'R')
				rightRot(botPlace[i][j]);
			else
				botPlace[i][j] = botPlace[i + 1][j];
			count++;
			botPlace[i][j] = 1;
			cout << count << endl;					
		}
	}
	return -1;	

 }



void leftRot(int matr[i][j]){
	int temp = i;
		i = i - i - j;
		j = temp;
}

void rightRot(int matr[i][j]){
	int temp = i - 2*i;
		i = j;
		j = temp;
}

