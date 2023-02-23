////////////////////////////////////////////////////////////////////////
// Class:       apConditions
// Plugin Type: analyzer (Unknown Unknown)
// File:        apConditions_module.cc
//
// Generated at Wed Feb 22 14:26:09 2023 by Ana Paula Vizcaya Hernandez using cetskelgen
// from  version .
////////////////////////////////////////////////////////////////////////

#include "art/Framework/Core/EDAnalyzer.h"
#include "art/Framework/Core/ModuleMacros.h"
#include "art/Framework/Principal/Event.h"
#include "art/Framework/Principal/Handle.h"
#include "art/Framework/Principal/Run.h"
#include "art/Framework/Principal/SubRun.h"
#include "canvas/Utilities/InputTag.h"
#include "fhiclcpp/ParameterSet.h"
#include "messagefacility/MessageLogger/MessageLogger.h"

#include "duneconditions/condServices/conditionsNP_service.h"

namespace cond {
  class apConditions;
}


class cond::apConditions : public art::EDAnalyzer {
public:
  explicit apConditions(fhicl::ParameterSet const& p);
  // The compiler-generated destructor is fine for non-base
  // classes without bare pointers or other resource use.

  // Plugins should not be copied or assigned.
  apConditions(apConditions const&) = delete;
  apConditions(apConditions&&) = delete;
  apConditions& operator=(apConditions const&) = delete;
  apConditions& operator=(apConditions&&) = delete;

  // Required functions.
  void analyze(art::Event const& e) override;

  // Selected optional functions.
  void beginJob() override;
  void endJob() override;

private:

  // Declare member data here.
  art::ServiceHandle<conditionsNP_ns::conditionsNP> cnp;
};


cond::apConditions::apConditions(fhicl::ParameterSet const& p)
  : EDAnalyzer{p}  // ,
  // More initializers here.
{
  // Call appropriate consumes<>() for any products to be retrieved by this module.
}

void cond::apConditions::analyze(art::Event const& e)
{
  // Implementation of required member function here.
}

void cond::apConditions::beginJob()
{
  // Implementation of optional member function here.
  std::cout << "Begining of job" << std::endl;
  std::string ou = cnp->getConditionsNPClient("Algo");
  std::cout << ou << std::endl;
}

void cond::apConditions::endJob()
{
  // Implementation of optional member function here.
}

DEFINE_ART_MODULE(cond::apConditions)
