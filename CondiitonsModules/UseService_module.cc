////////////////////////////////////////////////////////////////////////
// Class:       UseService
// Plugin Type: analyzer (Unknown Unknown)
// File:        UseService_module.cc
//
// Generated at Tue Feb  7 12:10:38 2023 by Ana Paula Vizcaya Hernandez using cetskelgen
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
#include "art/Framework/Services/Registry/ServiceHandle.h"
#include "canvas/Utilities/InputTag.h"
#include "ifdh_art/IFBeamService/IFBeam_service.h"
#include "art_root_io/TFileService.h"
#include "dunecalib/Calib/LifetimeCalib.h"

#include "ConditionsService/prueba_service.h"
#include "ConditionsService/conditions_service.h"

class UseService;


class UseService : public art::EDAnalyzer {
public:
  explicit UseService(fhicl::ParameterSet const& p);
  // The compiler-generated destructor is fine for non-base
  // classes without bare pointers or other resource use.

  // Plugins should not be copied or assigned.
  UseService(UseService const&) = delete;
  UseService(UseService&&) = delete;
  UseService& operator=(UseService const&) = delete;
  UseService& operator=(UseService&&) = delete;

  // Required functions.
  void analyze(art::Event const& e) override;

  // Selected optional functions.
  void beginJob() override;
  void endJob() override;
  //void ucondbData();

  long long int eventTime = 0;

  std::vector<double> FetchAndReport(
    long long, std::string,
    std::unique_ptr<ifbeam_ns::BeamFolder>&);

private:

  // Declare member data here.
  art::ServiceHandle<ifbeam_ns::IFBeam> ifb;
  std::unique_ptr<ifbeam_ns::BeamFolder> bfp; 

  std::string fBundleName;
  std::string fURLStr;
  double  fTimeWindow;

  art::ServiceHandle<conditions_ns::conditions> ctg;
  std::unique_ptr<conditions_ns::ConditionsFolder> cfd;
  std::string fglobalTag;
  double fmajorIov;
  double fminorIov;

  art::ServiceHandle<conditions_ns::prueba> pb;
};


UseService::UseService(fhicl::ParameterSet const& p)
  : EDAnalyzer{p},  // ,
  fBundleName(p.get<std::string>("BundleName")),
  fURLStr(p.get<std::string>("URLStr")),
  fTimeWindow(p.get<double>("TimeWindow")),
  fglobalTag(p.get<std::string>("globalTag")),
  fmajorIov(p.get<double>("majorIov")),
  fminorIov(p.get<double>("minorIov"))
  // More initializers here.
{
  // Call appropriate consumes<>() for any products to be retrieved by this module.
}

std::vector<double> UseService::FetchAndReport(long long time, std::string name, std::unique_ptr<ifbeam_ns::BeamFolder>& the_folder)
{
  std::cout << "Tring to grab from folder: " << name << std::endl;
  std::cout << "At time: " << time << std::endl;
  std::vector<double> theResult;
  theResult = the_folder->GetNamedVector(time, name);

  return theResult;
}

void UseService::analyze(art::Event const& e)
{
  // Implementation of required member function here.
  std::cout << "ClusterCounter module on evento #" << e.id().event() << std::endl;
  eventTime = e.time().timeHigh();
  std::string name = "dip/acc/NORTH/NP04/POW/MBPL022699:current";
  //std::vector<double> acqStamp = FetchAndReport(eventTime, name, bfp);
  //std::cout<< "This is the acqStamp" << acqStamp << std::endl;
  //for (char i: acqStamp)
    //std::cout << "This is part of the acqStamp" << i << std::endl;
}

void UseService::beginJob()
{
  // Implementation of optional member function here.
  std::cout << "Begin of job" << std::endl;
  pb->returnArg("Funciona muy bien!!!!!!!!");
  bfp = ifb->getBeamFolder(fBundleName,fURLStr,fTimeWindow);
  //uconR = ucon->getFolder(fNameUcon, fURLUcon, fTag);
 
  ctg->returnStr("Hopefull");
  //ctg->getConditionsFolder("Hellooo holaaa", 1, 0);
}

void UseService::endJob()
{
  // Implementation of optional member function here.
}

DEFINE_ART_MODULE(UseService)
