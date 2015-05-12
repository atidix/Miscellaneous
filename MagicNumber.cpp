#include <iostream>
#include <cstdlib>
using namespace std;

int reverse_recurse(int, int);
int addition(int, int);
int subtraction(int , int);

int main() {
  int number, x, y, a, s, r, b;
  cout << "Input a three digit number whose first digit is greater than its last. " ;
  cin >> number ;   
  a = reverse_recurse(number, 0) ;
  s = subtraction(number, a);
  r = reverse_recurse(s, 0);
  b = addition(s, r) ; 
  cout << b ;
   return 0 ;
}

int addition (int p, int q) {
  p = p + q;
    return (p);
}

int subtraction (int c, int d) {
   c = c-d ;
     return (c) ;
}

int reverse_recurse(int x, int y) {
  if (x == 0)
    return y;
  else {
    int unit = x%10;
    x = x/10;
    y= y*10 + unit;
    return reverse_recurse(x,y);
  }
}
