#include "conditions_service.h"
#include <memory>
#include <string>


namespace conditions_ns {

  conditions::conditions(fhicl::ParameterSet const&) {}

  void conditions::returnStr(std::string arg)
  {
    std::cout << "The given string: " << arg << std::endl;
  }

}
