//
// Created by linus on 2022/8/12.
//

#include <iostream>

int main() {
  int num1 = 0;
  int num2 = 0;

  std::cout << "Enter two numbers" << std::endl;
  std::cin >> num1 >> num2;

  int cmp = num1 - num2;
  int min = cmp > 0 ? num2 : num1;
  int max = cmp > 0 ? num1 : num2;

  min++;
  while (min < max) {
    std::cout << min++ << std::endl;
  }

  return 0;
}