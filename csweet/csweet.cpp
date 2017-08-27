#include "csweet.h"

namespace CPluser {
  class CPluser {
  private:
    int _seed;
  public:
    CPluser(int);
    int add(int);
  };

  CPluser::CPluser(int seed) {
    this->_seed = seed;
  }

  int CPluser::add(int with) {
    return with + this->_seed;
  }
}

void * CPluser_new(int seed)
{
  return new CPluser::CPluser(seed);
}

int CPluser_add(void * cpluser, int with)
{
  CPluser::CPluser * ref = (CPluser::CPluser *) cpluser;
  return ref->add(with);
}

void CPluser_del(void * cpluser) {
  CPluser::CPluser * ref = (CPluser::CPluser *) cpluser;
  delete ref;
}
