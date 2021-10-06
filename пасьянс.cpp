#include <iostream>

using namespace std;

int main() 
{
    /*input: 2 <= p < k < 1000;*/
    
    int p;
    int k ;
    int z=0;

    cin >> p >> k;
    int j = 0; /*инициируем счетчик ходов*/
    
    for(int i = p; i <= k; i++)
    {
       
        
        while (p > 2)
        {            

            if (p % 2 == 0)
                p = p / 2;
                
            if (p % 2 !=0)
                p = p * 3 + 1;
        

         j++; /*в счетчик добавился ход*/
        }
        z++;                  
  
    }
    cout << j + z << endl;

 return 0;
}
  