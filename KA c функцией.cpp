//решаем задачу -https://acmp.ru/index.asp?main=task&id_task=35
#include <iostream>

using namespace std;

long int nontriviality(int n, int m);

int main()
{
	setlocale(LC_ALL, "rus");
	//узнать количество КА
	int k;
	cout << "введите количество КА:" << endl;
	cin >> k;
	//для каждого КА прочитать пару свойств и по ним посчитать "нетривиальность"
	for (int i = 0; i < k; i++)
	{
		//long int n, m, d;
		int ni, mi;
		cin >> ni >> mi;
		//TODO: проверить правильность значений n и m
		// ni (0 ≤ ni ≤ 1000) и mi (0 ≤ mi ≤ 26ni2) 
		//d = 19 * m + (n + 239) * (n + 366) / 2;
		cout << nontriviality(ni, mi) << endl;
	}
	return 0;
}

long int nontriviality( int n,  int m)
{
	return 19 * m + (n + 239) * (n + 366) / 2;
}