// TRand.cpp

#include "TRand.h"


  TRand::TRand(unsigned long seed)
 {
  Ran = new TRandom3(seed);
 } 
  TRand::~TRand()
 {
  delete Ran; Ran = NULL;
 }

  double TRand::rnd()
 {
  return Ran->Rndm();
 }

