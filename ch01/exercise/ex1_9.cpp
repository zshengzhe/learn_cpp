//
// Created by linus on 2022/8/11.
//

#include <iostream>

int main() {
  int sum = 0;
  int val = 50;

  while (val <= 100) {
    sum += val;

    val++;
  }

  std::cout << "Sum of 50 to 100 inclusive is "
            << sum << std::endl;

  return 0;
}