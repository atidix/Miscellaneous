#include <iostream>
#include <cmath>


using namespace std;

int main ()

{
      float flagstone_side, theatre_length, theatre_breadth, x, y, n;

cin >> theatre_length >> theatre_breadth >> flagstone_side;

x = ceil(theatre_length/flagstone_side);

y = ceil(theatre_breadth/flagstone_side);

cout << x * y;

return 0;

}



