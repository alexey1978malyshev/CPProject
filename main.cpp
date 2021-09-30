#include <iostream>
#include <vector>
using namespace std;

 //количество дуг в вершинах графа
int main() {
  int n = 5, m = 12;
  cin >> n >> m;
  
  vector<int> crosses(n);

  for (int i = 0; i < n; ++i)
  {
    int from, to;
    cin >> from >> to; 
    crosses [from-1]++;
    crosses [to-1]++;
  }

  for (int cross : crosses)
  {
    cout << cross << " ";
  }
  return 0;

} 


//Решение задачки Светофорчики
/*#include <bits/stdc++.h>
using namespace std;
  int main()
    {
        int n, m, a, b;
        cin >> n >> m;
        vector<int> res(n + 1);
        for(int i = 0; i < m; ++i){
            cin >> a >> b;
            res[a]++;
            res[b]++;
        }
        for(int i = 1; i <= n; ++i)
            cout << res[i] << ' ';
        return 0;
    }*/





