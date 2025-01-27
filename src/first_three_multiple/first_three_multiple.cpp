#include <iostream>
#include <vector>

std::vector<int> first_three_multiples(int num, int repitition)
{
  std::vector<int> multiples;

  for (int i = 1; i <= repitition; i++)
  {
    multiples.push_back(num * i);
  }

  return multiples;
}


int main() 
{  
  for (int num: first_three_multiples(7,3))
  {
    std::cout << num << std::endl; 
  }
}