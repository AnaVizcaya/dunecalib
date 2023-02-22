#include <fstream>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

#include <string>
#include <vector>
#include "math.h"
#include "stdio.h"

#include "conditions.h"

namespace conditions_ns {

ConditionsFolder::ConditionsFolder(std::string global_tag, double major_iov, double minor_iov ) {
  _global_tag = global_tag;
  _major_iov = major_iov;
  _minor_iov = minor_iov;

  std::cout << "conditions folder constructor, with global tag: " << _global_tag << std::endl;

}

void ConditionsFolder::printValues() {
  std::cout << "Global tag: " << _global_tag << std::endl;
  std::cout << "Major iov: " << _major_iov << std::endl;
  std::cout << "Minor iov: " << _minor_iov << std::endl;

}


}
