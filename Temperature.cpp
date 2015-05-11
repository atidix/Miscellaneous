#include <iostream>
#include <cstdlib>
using namespace std;

float temp(float kChirps_per_min, float temperature);

int main() {
  float kChirps_per_min, temperature;
  cout << "Enter number of chirps per minute " ;
  cin >> kChirps_per_min ; 
  cout << "The temperature is: " << temp(kChirps_per_min, temperature);
  return 0;
}

float temp(float kChirps_per_min, float temperature)  {
  kChirps_per_min = kChirps_per_min + 40 ;
  temperature = kChirps_per_min / 4 ;
  return (temperature);
}
