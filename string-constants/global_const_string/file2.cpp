#include "common.h"

#include <iostream>

void print_address_2() {
  std::cout << "print_address_2: "
            << static_cast<const void *>(constants::kConstant.c_str())
            << std::endl;
}
