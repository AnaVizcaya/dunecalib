#ifndef PRUEBASERVICE_H
#define PRUEBASERVICE_H
#include <memory>
#include <string>
#include "fhiclcpp/ParameterSet.h"
#include "art/Framework/Services/Registry/ActivityRegistry.h"
#include "art/Framework/Services/Registry/ServiceDeclarationMacros.h"
#include "fhiclcpp/fwd.h"


namespace conditions_ns {

  class prueba {
  public:
    explicit prueba(fhicl::ParameterSet const&);

    void returnArg(std::string arg); //{
     // std::cout << "The given string: " << arg << std::endl;
    //};
  };


}

DECLARE_ART_SERVICE(conditions_ns::prueba, LEGACY)

#endif 
