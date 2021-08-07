#include <iostream>

#include "aws/core/Aws.h"

int main() {
  Aws::SDKOptions options;
  Aws::InitAPI(options);
  {
    std::cout << "Hello, World!" << std::endl;
  }
  Aws::ShutdownAPI(options);
  return 0;
}