//
// Created by linus on 2022/8/15.
//

#include <iostream>
#include "../../include/Sales_item.h"

int main() {
  Sales_item curr, value;

  if (std::cin >> curr) {
    int count = 1;

    while (std::cin >> value) {
      if (value.isbn() == curr.isbn()) {
        count++;
      } else {
        std::cout << curr << " occurs" << count << " times " << std::endl;
        curr = value;
        count = 1;
      }
    }

    std::cout << curr << " occurs " << count << " times " << std::endl;
  }

  return 0;
}
