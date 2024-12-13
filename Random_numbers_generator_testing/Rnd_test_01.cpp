#include "TRand.h"
#include "TGraph.h"

unsigned long seed = 109281119321;
int N = 1000;
TRand* Rnd;
TGraph* gr;

int Rnd_test_01() {
	Rnd = new TRand(seed);
	gr = new TGraph(N);
	gr->SetMarkerStyle(20);
	for (int i = 0; i < N; i++) {
		double y = Rnd->gen();
		gr->SetPoint(i, i, y);
	}
	gr->Draw("Ap");
	return 0;
}
