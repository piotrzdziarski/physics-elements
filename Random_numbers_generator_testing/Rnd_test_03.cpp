#include "TRand.h"
//#include "TGraph.h"
#include "TH1F.h"
#include "TCanvas.h"

unsigned long seed = 309281119321;
int N = 1e7;
TRand* Rnd;
//TGraph* gr;
TCanvas* c_02, *cG_02;
TH1F* h_02, *hG_02;

int Rnd_test_03() {
	Rnd = new TRand(seed);
	//gr = new TGraph(N);
	//gr->SetMarkerStyle(20);
	//for (int i = 0; i < N; i++) {
	//	double y = Rnd->gen();
	//	gr->SetPoint(i, i, y);
	//}
	//gr->Draw("Ap");
	h_02 = new TH1F("h_02", "Histogram Y", 1000, 0, 1);
	h_02->SetXTitle("Graf Y");
	h_02->SetYTitle("n");
	//double* yy = gr->GetY();
	for (int i = 0; i < N; i++) {
		double y = Rnd->gen();
		h_02->Fill(y);
	}
	c_02 = new TCanvas("c_02", "hist_02", 200, 100, 600, 600);
	h_02->Draw();
	c_02->Update();
	hG_02 = new TH1F("hG_02", "histogram z histogramu", 80, 9600, 10400);
	hG_02->SetXTitle("Trafienia histogramu");
	hG_02->SetYTitle("n");
	int K = h_02->GetNbinsX();
	for (int i = 0; i < K; i++) {
		hG_02->Fill(h_02->GetBinContent(i));
	}
	cG_02 = new TCanvas("cG_02", "histG_02", 100, 50, 600, 600);
	hG_02->Draw();
	cG_02->Update();
	return 0;
}
