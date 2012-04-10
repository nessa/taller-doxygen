#ifndef _CLASE_D_
#define _CLASE_D_
#include "clase_a.h"
#include "clase_c.h"
class B;
class D: virtual protected A, private C {
  public:
    B b_;
};
#endif
