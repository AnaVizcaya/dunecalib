#include "prueba_service.h"


namespace conditions_ns {
  prueba::prueba(fhicl::ParameterSet const&) {}

  void prueba::returnArg(std::string arg)
  {
    std::cout << "The given string prueba: " << arg << std::endl;
  }
}
