#include "Conter3Po2Ho.h"

Counter3Po2ho ConstructCouter3Po2Ho( std::uintmax_t F, std::uintmax_t B) {
	In.Counter = 0;
	In.C = 0;
	In.F = F;
	In.B = B;
	In.Fl = 1;

	return true;
}

intmax_t Do(Counter3Po2Ho& In) {
	In.Counter += 1 * In.Fl;
	In.C++;
	if(In.Fl>0){
		if (In.F <= In.C) {
			In.C = 0;
			In.Fl *= -1;
		}
	}
	else {
		if(In.B<=In.C){
			In.C = 0;
			In.Fl *= -1;
		}
	}
	return In.Counter;
}
