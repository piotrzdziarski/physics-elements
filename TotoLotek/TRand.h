// TRand.h

#ifndef TRand__01
#define TRand__01


#include "TRandom3.h"


  class TRand 
 {
  public:

  TRandom3* Ran;
  
  TRand(unsigned long seed = 0);
  ~TRand();

  double rnd();

 };

#endif

