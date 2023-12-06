#include "common.h"

#include <iostream>

void print_address_1() {
  std::cout << "print_address_1: "
            << static_cast<const void *>(constants::kConstant.data())
            << std::endl;
}
