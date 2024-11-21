#include "TF1.h"

double Mmu_GeV = 0.10566;
double Tau_mu = 2.197e-6;
double T_mu (double Emu_Gev) {
        double gammaL = Emu_Gev / Mmu_GeV;
        if (gammaL < 1) return 0.0;
	return gammaL * Tau_mu;
}

void Czas_obserwowania_mionu() {
        TF1* f_Tmu = new TF1("f_Tmu", "T_mu(x)", 0, 100);
        f_Tmu->Draw();
}
