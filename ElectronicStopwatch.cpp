#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
  int h, m, s;
  cout << "Enter number of seconds " ;
  cin >> s ;
  h = s / 3600 ;
  m = (s % 3600) / 60 ;
  s = s - (h * 3600 + m * 60)  ;
  cout << "Hours: " << h << endl << "Minutes: " << m << endl << "Seconds: " << s;  
  return 0 ;
}
