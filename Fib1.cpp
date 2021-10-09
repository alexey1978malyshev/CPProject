#include <iostream>
using namespace std;

/*int fibR(int i);

int main()
{
    int i = 0;
    cin >> i;
    cout << fibR(i) << endl;

    return 0;
}

int fibR(int i)
{
    if (i == 0)
        return 0;
    if (i == 1)
        return 1;
    if (i >= 2)
        return fibR(i - 1) + fibR(i - 2);
}  */

 /* решение через цикл: */

int fibF(int n);

int main()
{
    int n;

    cin >> n;

    cout << fibF(n) << endl;    

return 0;
}

int fibF(int n)

{
    int tSum;
    
    int a = 0;

    int b = 1; 

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    if (n > 2);
    
        for (int i = 0; i < (n-1); i++)

            {            
                tSum = a + b;

                a = b;

                b = tSum;               
            }
        return tSum;
        
} 



    
    

        
         

