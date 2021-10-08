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


int fibR(int n);

int main()
{
    int n = 0;
    cin >> n;
    cout << fibR(n) << endl;

    return 0;
}

int fibR(int n)
{
      
    int k = 3;

    int nN;

    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    if (n > 2)



        for (int n=3; k <= n; n++)

        {            

            k = (k-1) + (k-2);

        }

    nN = k;    

    return nN;

}