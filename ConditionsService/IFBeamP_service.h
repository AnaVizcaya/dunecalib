#ifndef ifdh_art_IFBeamService_IFBeamP_service_h
#define ifdh_art_IFBeamService_IFBeamP_service_h

#include "ifbeam.h"

#include <memory>
#include <string>

#include "art/Framework/Services/Registry/ServiceDeclarationMacros.h"
#include "fhiclcpp/fwd.h"

namespace ifbeamP_ns {

  class IFBeamP {
  public:
    explicit IFBeamP(fhicl::ParameterSet const&);

    void returnStr(std::string arg);//{
    // std::cout << "Hello hola" << std::endl;
    //};
    //std::unique_ptr<BeamFolder> getBeamFolder(std::string bundle_name,
    //                                          std::string url = "",
    //                                          double time_width = 1200.0);
  };

}

DECLARE_ART_SERVICE(ifbeamP_ns::IFBeamP, LEGACY)

#endif
