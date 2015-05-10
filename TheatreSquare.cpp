#include <iostream>


using namespace std;

int main ()

{
      int flagstone_side, theatre_length, theatre_breadth, theatre_area, flagstone_area, n;

cin >> theatre_length >> theatre_breadth >> flagstone_side;

 theatre_area = theatre_length * theatre_breadth;
 flagstone_area = flagstone_side * flagstone_side;
 if (theatre_area > flagstone_area) {
 
 n = theatre_area / flagstone_area; 
  if (theatre_area % flagstone_area != 0) {
n=n+1 ;

}

if (n % 2 != 0) { 

n = n+1;

}

cout << n;

} 

else cout << "1";



return 0;

}



