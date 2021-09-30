#include <iostream>
#include <vector>
using namespace std;


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