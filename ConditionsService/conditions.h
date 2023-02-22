#ifndef CONDITIONS_H
#define CONDITIONS_H
#include <string>
#include <vector>
#include <WebAPI.h>



namespace conditions_ns {

class ConditionsFolder {
  protected:
  // Initialization parameters
  std::string _global_tag;
  double _major_iov;
  double _minor_iov;

  public:
  //constructor
  ConditionsFolder(std::string global_tag, double major_iov, double minor_iov = 1);

  //Functions
  void printValues();

};


}

using namespace conditions_ns;
#endif //CONDITIONS_H
