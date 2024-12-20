// Rnd_Test_04
// 13/12/2024

#include "TRand.h"
//#include "TGraph.h"
#include "TH1F.h"
#include "TCanvas.h"

  unsigned long Lseed = 309281119321;
  int N = 1e7;  

  TRand* Rnd;
  TCanvas* c_02, *cG_02;
  TH1F* h_02, *hG_02;

  int Rnd_Test_04(unsigned long seed = Lseed);


  int Rnd_Test_04(unsigned long seed)
 {
  Rnd = new TRand(seed);

  h_02 = new TH1F("h_02", "histogram Y", 1000, 0, 1);
  h_02->SetXTitle("graf Y");
  h_02->SetYTitle("n");

  double y0 = Rnd->rnd();

  for (int i=0; i<N; i++) {
    double y = Rnd->rnd();
    double dy = y - y0;
    if (dy < 0.0) {dy += 1.0;}
    h_02->Fill(dy);
    y0 = y;
   }

  c_02 = new TCanvas("c_02", " hist_02", 200, 100, 600, 600);
  h_02->Draw();
  c_02->Update();

  hG_02 = new TH1F("hG_02", "hist z hisogramu", 80, 9600, 10400);
  hG_02->SetXTitle("trafienia hist");
  hG_02->SetYTitle("n");
 
  int K = h_02->GetNbinsX();
  for (int i=0; i<K; i++) {
    hG_02->Fill(h_02->GetBinContent(i));
   }
   
  cG_02 = new TCanvas("cG_02", " Gaus", 100,  50, 600, 600);
  hG_02->Draw();
  cG_02->Update();




  return 0;
 };




