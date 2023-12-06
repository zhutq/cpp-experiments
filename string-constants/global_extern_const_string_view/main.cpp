#include "common.h"
#include "file1.h"
#include "file2.h"

#include <iostream>
#include <string>

int main(int argc, const char *argv[]) {
  print_address_1();
  print_address_2();

  std::string m = "main: ";
  std::cout << m << static_cast<const void *>(constants::kConstant.data())
            << std::endl;
}
