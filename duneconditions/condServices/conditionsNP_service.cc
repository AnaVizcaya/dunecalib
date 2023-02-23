#include "conditionsNP_service.h"
#include "art/Framework/Services/Registry/ServiceDefinitionMacros.h"

//--------
conditionsNP_ns::conditionsNP::conditionsNP(fhicl::ParameterSet const&) {}


//-------
std::string conditionsNP_ns::conditionsNP::getConditionsNPClient(std::string globalTag){
   std::string ret = "nopayloadclient::Client client {";
   ret.append(globalTag);
   return ret;
}

DEFINE_ART_SERVICE(conditionsNP_ns::conditionsNP)
