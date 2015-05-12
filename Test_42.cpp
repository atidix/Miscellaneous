#include <iostream>
using namespace std;

int main()
{
  int x;
  for (int i = 0;; i++) {
    cin >> x;
    if (x>100)
      break;
    if (x<-100)
      break;
    if (x==42)
      break;
    cout << x;
  }
  return 0;
}
