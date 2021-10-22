
#include <iostream>
using namespace std;

const int NCOL = 8, NROW = 8;
void printMatr(int m[NROW][NCOL]);
bool bitOfElef (int a, int b);
bool bitOfQueen (int a, int b);

int main()
{
	int matr1[NCOL][NROW];
	int k = 0;
	int x;//координаты короля
	int y;

	int matr2[NROW][NCOL];
	for (int i = 0; i < NROW; i++)
	{
		for (int j = 0; j < NCOL; j++)
		{
			k++;
			matr2[i][j] = k;
		}
	}
	printMatr(matr2);
	cout << " Введите координаты короля : -----" << endl;
	cin >> x;
	cin >> y;
	if (bitOfElef (x, y) == true )
		cout <<	"Шах от слона"<< endl;

	/*else if (bitOfQueen (x, y)== true)
		cout <<	"Шах от ферзя"<< endl;*/
	else
		cout <<	"Шаха нет"<< endl;

	
}

//пишем ф-ию для слона

bool bitOfElef (int a, int b)
	{
	
	for (int i = 0; i <= 7; i++)
		{

		for (int j = 0; j <= 7; j++)
			{		
			 if (a == i && b == j)

			 	return true;
			 else
			 	false;
			 	

			}
		}		

	}
//пишем ф-ию для ферзя

bool bitOfQueen (int a, int b)
{
	
	for (int i = 0; i <= 7; i++)
		{

		for (int j = 5; j <= 7; j++)
			{		
			 if (a == i && b == j)

			 	return true;
			 	

			}
		}		

	}
	/*for (int i = 1; i <= 7; i++)
		{

		for (int j = 4; j <= 7; j--)
			{		
			 if (a == i && b == j)

			 	return "QShah2!!!";			 	

			}
		}
	

	for (int i = 0; i <= 7; i++)
		{

		for (int j = 5; ; )
			{		
			 if (b == j)

			 	return "QShah3!!!";
			 	

			}
		}		

	for (int i = 0;;)
		{

		for (int j = 0;j <=7; j++)
			 {
			 	if (a == i)

			 	return "QShah4!!!";
			 }
		}
	*/

void printMatr(int m[NROW][NCOL])
{
	for (int i = 0; i < NROW; i++)
	{
		for (int j = 0; j < NCOL; j++)
		{
			cout.width(4);
			cout << m[i][j];
		}
		cout << endl;
	}
	cout << endl;
}