#include "TRand.h"

TRand::TRand(unsigned long seed = 0) {
	rnd = new TRandom(seed);
}
TRand::~TRand() {
	delete rnd; rnd = NULL;
}
double TRand::gen() {
	return rnd->Rndm();
}
