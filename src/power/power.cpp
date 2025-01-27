#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num, int exp) 
{  
  int result = num;
  for (int i = 0; i < exp - 1; i++)
  {
    result *= num;
  }

  return result;
}

int main() {
  
  std::cout << tenth_power(0, 10) << "\n"; 
  std::cout << tenth_power(1, 10) << "\n"; 
  std::cout << tenth_power(2, 5) << "\n";
  
}