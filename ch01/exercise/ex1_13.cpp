//
// Created by linus on 2022/8/12.
//

#include <iostream>

int main() {
  int sum = 0;
  for (int i = 50; i <= 100; i++) {
    sum += i;
  }
  std::cout << sum << std::endl;

  for (int i = 10; i >= 0; i--) {
    std::cout << i << std::endl;
  }

  int min = 0;
  int max = 0;

  std::cout << "Enter two numbers" << std::endl;
  std::cin >> min >> max;

  for (int i = ++min; i<= max; i++) {
    std::cout << i << std::endl;
  }

  return 0;
}