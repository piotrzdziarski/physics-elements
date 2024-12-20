

#include "TRand.h"
#include "TGraph.h"

  unsigned long Lseed = 309281118329;
  int N = 10000;  

  TRand* Rnd;
  TGraph* gr;

  int Rnd_Test_01(unsigned long seed = Lseed);


  int Rnd_Test_01(unsigned long seed)
 {
  Rnd = new TRand(seed);

  gr = new TGraph(N);
  gr->SetMarkerStyle(20);

  for (int i=0; i<N; i++) {
    double y = Rnd->rnd();
    gr->SetPoint(i, i, y);
   }
  
  gr->Draw("Ap");

  return 0;
 };




