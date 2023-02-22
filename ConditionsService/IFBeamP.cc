#include "IFBeamP_service.h"

namespace ifbeamP_ns {

  IFBeamP::IFBeamP(fhicl::ParameterSet const&) {}

  void IFBeamP::returnStr(std::string arg)
    {
     std::cout << "Hello hola" << std::endl;
    }
  //std::unique_ptr<BeamFolder>
  //IFBeamP::getBeamFolder(std::string bundle_name,
  //                      std::string url,
  //                      double time_width)
  //{
  //  return std::make_unique<BeamFolder>(bundle_name, url, time_width);
  //}
}
