#include <iostream>

using namespace std;

int reverse_recurse(int, int);

int main() {
  int n, first_number, reverse_first, reverse_second, second_number, sum, reverse_sum, x, y, i;

cin >> n;

for (i=0; i<n; i++) {

cin >> first_number >> second_number;

reverse_first = reverse_recurse(first_number,0);

reverse_second = reverse_recurse(second_number,0);

sum = reverse_first + reverse_second;

reverse_sum = reverse_recurse(sum,0);

cout << reverse_sum;
}

return 0;
}

int reverse_recurse(int x, int y) {
if (x == 0) return y;
else {

  int unit = x%10;
  x = x/10;
  y= y*10 + unit;
  return reverse_recurse(x,y);
}
}  
