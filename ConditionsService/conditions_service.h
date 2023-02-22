#ifndef CONDITIONSSERVICE_H
#define CONDITIONSSERVICE_H
#include <memory>
#include <string>
#include "art/Framework/Services/Registry/ActivityRegistry.h"
#include "art/Framework/Services/Registry/ServiceDeclarationMacros.h" 
#include "fhiclcpp/fwd.h"
#include "fhiclcpp/ParameterSet.h"

#include "conditions.h"

namespace conditions_ns {

  class conditions {
    public:
      conditions(fhicl::ParameterSet const&);

      std::unique_ptr<ConditionsFolder> getConditionsFolder(std::string global_tag, 
								 double major_iov,
                						 double minor_iov)
      {
        return std::make_unique<ConditionsFolder>(global_tag, major_iov, minor_iov);
      };
      void returnStr(std::string arg);
      //{
      //  std::cout << "The given string: " << arg << std::endl;
      //};
  };

}

void conditions_ns::conditions::returnStr(std::string arg)
{
  std::cout << "The given string: " << arg << std::endl;
}

DECLARE_ART_SERVICE(conditions_ns::conditions, LEGACY)

#endif 
