#ifndef TRand__01
#define TRand__01
#include "TRandom.h"

class TRand {
public:
	TRand(unsigned long seed = 0);
	~TRand();
	TRandom* rnd;
	double gen();
};

#endif
