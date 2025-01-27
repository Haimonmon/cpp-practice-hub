<a id="readme-top"></a>

<h1></h1>
<h1 align="center"> C++ Practice Hub </h1>

<div align="center">

<img src="https://github.com/user-attachments/assets/19e2ad7a-048e-4e53-b391-50dc638013a0" alt="Written on C plus plus badge" height=28px >


<h4>
This repository presents a collection of small exercises to help me become familiar with C++ programming.
</h4>
<br>

</div>

<hr>

## Contents
* [ Water Consumption Calculator ](#water-consumption-calculator)
* [ Basic Arithmetic Calculator ](#basic-arithmetic-calculator)
* [ Palindrome ](#palindrome)
* [ Piggy Bank ](#piggy-bank)
* [ First Three Multiple ](#first-three-multiple)
* [ Tenth Power ](#tenth-power)
* [ Dog Years ](#dog-years)
* [ Quadratic Formula ](#quadratic-formula)



## Water Consumption Calculator 

<br>

## Basic Arithmetic Calculator

<br>

## Palindrome
Define a function is_palindrome() that takes:

An std::string parameter text.
The function should return:

true if text is a palindrome.

false if text is not a palindrome.

(A palindrome is any text that has the same characters backwards as it does forwards. For example, “hannah” and “racecar” are palindromes, while “menu” and “aardvark” are not.)

We will not test for edge cases such as capitalization or spaces.

### Example Output
```cpp

int main() 
{
  
  std::cout << is_palindrome("madam") << "\n"; // 1
  std::cout << is_palindrome("ada") << "\n"; // 1
  std::cout << is_palindrome("lovelace") << "\n"; // 0  
  
}

```
##

<br>

## Piggy Bank

<br>

## First Three Multiple
Write a function named first_three_multiples() that has:

An int parameter named num.
The function should return an std::vector of the first three multiples of num in ascending order.

### Example Output
```cpp


int main() 
{  
  for (int num: first_three_multiples(7))
  {
    std::cout << num << std::endl; // 7, 14, 21 
  }
}

```
##

<br>

## Tenth Power
Write a function named tenth_power() that has:

An int parameter named num.

The function should return num raised to the 10th power.

### Example Output
```cpp

int main() 
{
  std::cout << tenth_power(0) << "\n"; // 0 
  std::cout << tenth_power(1) << "\n"; // 1
  std::cout << tenth_power(2) << "\n"; // 32
}

```
<br>

## Dog Years

<br>

## Quadratic Formula 
