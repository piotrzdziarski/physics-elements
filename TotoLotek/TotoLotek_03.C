// TotoLotek_03
// 17/12/2024

#include "TRand.h"
//#include "TGraph.h"
#include "TH1D.h"
#include "TCanvas.h"

  unsigned long Lseed = 319261119321;
  int N = 2e7;  
  int Ntyg = 52;

 

  TRand* Rnd;
  TCanvas* c_TL, *c_5, *c_6; 
  TH1D* h_TL, *h_5, *h_6;

  int W[6];  // tabela robocza;  
  int W6[6];  // tabela wylosowana w TotoLotku

  int k5, k6;

  int TotoLotek_03(unsigned long seed = Lseed);
  int Niedziela();
  int Traf();
  int Losuj_6();

  void Skaluj();

  int TotoLotek_03(unsigned long seed)
 {
  Rnd = new TRand(seed);

  c_TL = new TCanvas("c_TL", " hist_TL", 200, 100, 600, 600);
  c_TL->SetLogy();

  h_TL = new TH1D("h_TL", "histogram trafien", 7, 0, 7);
  h_TL->SetXTitle("trafienia");
  h_TL->SetYTitle("n");
  h_TL->SetMaximum(5e8);
  h_TL->SetMinimum(0.2);

  h_5 = new TH1D("h_5", "piatki", 200, 0, 800);
  h_6 = new TH1D("h_6", "szostki", 25, 0, 25);



  for (int i=0; i< Ntyg; i++) {
     Niedziela();
   }

  c_TL->Update();

  c_5 = new TCanvas("c_5", "piatki", 100, 100, 600, 600);
  h_5->Draw();
  c_5->Update();

  c_6 = new TCanvas("c_6", "6-tki", 100, 100, 600, 600);
  h_6->Draw();
  c_6->Update();



  return 0;
 }

// *********************
   void Skaluj(void)
 {
  h_TL->Scale(1./Ntyg);
  h_TL->Draw("hist");
  c_TL->Update();
 }
// *********************
  int Niedziela()
 {
  k5 = 0;
  k6 = 0;

  Losuj_6();
  for (int i=0; i<6; i++) {W6[i] = W[i];}

  for (int i=0; i<N; i++) {
    Losuj_6();
    int traf = Traf();
    h_TL->Fill(traf);
    if (traf == 5) k5++;
    if (traf == 6) k6++;
   }

  h_TL->Draw();
  c_TL->Modified();
  c_TL->Update();
  
  h_5->Fill(k5);
  h_6->Fill(k6);

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



