#include "conditions_service.h"
#include "art/Framework/Services/Registry/ServiceDefinitionMacros.h"



  conditions_ns::conditions::conditions(fhicl::ParameterSet const&) {}
  
  std::unique_ptr<conditions_ns::ConditionsFolder>
  conditions_ns::conditions::getConditionsFolder(std::string global_tag, 
                                  double major_iov,
                                  double minor_iov){
    return std::make_unique<ConditionsFolder>(global_tag, major_iov, minor_iov);
  }
  
  void conditions_ns::conditions::returnStr(std::string arg)
  {
    std::cout << "The given string: " << arg << std::endl;

  }

DEFINE_ART_SERVICE(conditions_ns::conditions)
