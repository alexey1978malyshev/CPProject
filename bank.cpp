#include <iostream>
using namespace std;

int main() {

  setlocale(LC_ALL, "rus");

    /*задаем массив с описанием номиналов купюр*/
    int money[] = {5000,2000,1000,500,200,100}; 

    /*массив с заданным количеством купюр каждого номинала*/
    int paperCount[] = {3, 10, 3, 9, 10, 2}; 

    int cashInhands[6] = {}; //массив для формирования суммы к выдаче

    //количество денег в банкомате Как перемножить элементы массивов????

    int moneyLimit = money{0} * paperCount{0} + money{1} * paperCount{1} + money{2} * paperCount{2} + money{3} * paperCount{3} + money{4} * paperCount{4} +  money{5} * paperCount{5};

    int x; //запрашиваемая сумма

    cout << "Введите сумму: " << endl;

    cin >> int x;   

  //if (x > moneyLimit)

   // cout << "В банкомате недостаточно средств" << endl;

    while(x >= money{5})                                            //  ??? for(size_t i=0; i < size(money); ++i)

      { 
      if (x >= money{0})
        cashInhands{0} = x / money{0};// записали кол-во 5т купюр к выдаче
        x = x - cashInhands{0} * money{0}; // уменьшаем сумму к выдаче
        

      if (x < money{0} && x >= money{1})
        cashInhands{1} = x / money{1};// записали кол-во 2т купюр к выдаче
        x = x - cashInhands{1} * money{1};
     

      if (x < money{1} && x >= money{2})
        cashInhands{2} = x / money{2};// записали кол-во 1т купюр к выдаче
        x = x - сashInhands{2} * money{2};
        

      if (x < money{2} && x >= money{3})
        cashInhands{3} = x / money{3};// записали кол-во 0.5т купюр в к выдаче
        x = x - сashInhands{3}* money{3};
     

      if (x < money{3} && x >= money{4})
        cashInhands{4} = x / money{4};// записали кол-во 0.2т купюр в к выдаче
          x = x - сashInhands{4}* money{4};
        

      if (x < money{4} && x >= money{5})
        cashInhands{5} = x / money{5};// записали кол-во 0.1т купюр в к выдаче
        x = x - сashInhands{5} * money{5};
        
      }
  

  cout << cashInhands{0} << ", "  << cashInhands{1} << ", "  << cashInhands{2} << ", " << cashInhands{3} << ", " << cashInhands{4} << ", " << cashInhands{5} <<endl;    

  return 0;
}