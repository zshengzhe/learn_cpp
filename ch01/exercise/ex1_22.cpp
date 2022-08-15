//
// Created by linus on 2022/8/12.
//

#include <iostream>
#include "../../include/Sales_item.h"

int main() {

  Sales_item result;
  Sales_item curr;

  while (std::cin >> curr) {
    result += curr;
  }

  std::cout << result << std::endl;

  return 0;
}
