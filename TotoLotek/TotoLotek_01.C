// TotoLotek_01
// 17/12/2024

#include "TRand.h"
//#include "TGraph.h"
#include "TH1D.h"
#include "TCanvas.h"

  unsigned long Lseed = 308261129329;
  int N = 2e7;

  TRand* Rnd;
  TCanvas* c_TL;
  TH1D* h_TL;

  int W[6];  // tabela robocza;
  int W6[6];  // tabela wylosowana w TotoLotku


  int TotoLotek_01(unsigned long seed = Lseed);
  int Traf();
  int Losuj_6();


  int TotoLotek_01(unsigned long seed)
 {
  Rnd = new TRand(seed);

  Losuj_6();
  for (int i=0; i<6; i++) {W6[i] = W[i];}

  h_TL = new TH1D("h_TL", "histogram trafien", 7, 0, 7);
  h_TL->SetXTitle("trafienia");
  h_TL->SetYTitle("n");

  for (int i=0; i<N; i++) {
    Losuj_6();
    int traf = Traf();
    h_TL->Fill(traf);
   }

  c_TL = new TCanvas("c_TL", " hist_TL", 200, 100, 600, 600);
  h_TL->Draw();
  c_TL->Update();

  return 0;
 };

// *********************
  int Traf()
 {
  int k =0;
  for (int i=0; i<6; i++) {
    int Gracz= W[i];
    for (int j=0; j<6; j++) {
      if (Gracz == W6[j]) k++;
     }
   }
  return k;
 }


// *********************
  int Losuj_6(void)
 {
  const int N49 = 49;
  int kW = 0;

  while (kW<6) {
    double y = Rnd->rnd();
    int j = (int)(y * N49) + 1;
    if (j < 1) continue;
    if (j > N49) continue;

    bool b = false;
    if (kW > 0) {
      for (int i=0; i<kW; i++) {
        if (j == W[i]) {b=true; continue;}
       }
      if (b) continue;
     }
    W[kW] = j;
    kW++;
   };

  return kW;
 }



