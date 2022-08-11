//
// Created by linus on 2022/8/11.
//

#include <iostream>

int main() {
  int min = 0;
  int max = 0;

  std::cout << "Enter two numbers" << std::endl;
  std::cin >> min >> max;

  min++;
  while (min < max) {
    std::cout << min++ << std::endl;
  }

  return 0;
}