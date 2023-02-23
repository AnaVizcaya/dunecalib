#ifndef CONDITIONSNPSERVICE_H
#define CONDITIONSNPSERVICE_H

#include <memory>
#include <string>
#include "fhiclcpp/ParameterSet.h"
#include "art/Framework/Services/Registry/ActivityRegistry.h"
#include "art/Framework/Services/Registry/ServiceDeclarationMacros.h"
#include "fhiclcpp/fwd.h"

namespace conditionsNP_ns {

  class conditionsNP {
    public:
      conditionsNP(fhicl::ParameterSet const&);

      std::string getConditionsNPClient(std::string globalTag); 

  };

}

DECLARE_ART_SERVICE(conditionsNP_ns::conditionsNP, LEGACY)

#endif
