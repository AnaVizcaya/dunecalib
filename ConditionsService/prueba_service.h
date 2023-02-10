#ifndef PRUEBASERVICE_H
#define PRUEBASERVICE_H
#include <memory>
#include <string>
#include "fhiclcpp/ParameterSet.h"
#include "art/Framework/Services/Registry/ActivityRegistry.h"
#include "art/Framework/Services/Registry/ServiceDeclarationMacros.h"
#include "fhiclcpp/fwd.h"

class prueba {
public:
    explicit prueba(fhicl::ParameterSet const&);

    void returnArg(std::string arg) {
      std::cout << "The given string: " << arg << std::endl;
    };
    //std::unique_ptr<pruebaFolder> getPruebaFolder(std::string bundle_name,
    //                                          std::string url = "",
    //                                          double time_width = 1200.0);
  };

DECLARE_ART_SERVICE(prueba, LEGACY)

#endif 
