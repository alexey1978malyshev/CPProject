#include <iostream>

using namespace std;

int main() 
{
    /*input: 2 <= p < k < 1000;*/
    
    int p;
    int k;
    
    cin >> p >> k;

    int j = 0; /*инициируем счетчик ходов*/
    
    for(int i = p; i <= k; i++)
    {
               
        while (p > 2)
        {            

            if (p % 2 == 0)
                p = p / 2;
                
            else
                p = p * 3 + 1;
        
         j++; /*в счетчик добавился ход*/
        }
        p = i; /* возврат значения переменной для перехода к следующей колоде*/
        p++;
         
    }
    cout << j << endl;

 return 0;
}
  