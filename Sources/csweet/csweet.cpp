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
#if __cplusplus > 199711L
  auto ref = (CPluser::CPluser *) cpluser;
  return ref->add(with) + 11;
#else
  CPluser::CPluser * ref = (CPluser::CPluser *) cpluser;
  return ref->add(with);
#endif
}

void CPluser_del(void * cpluser) {
  CPluser::CPluser * ref = (CPluser::CPluser *) cpluser;
  delete ref;
}
