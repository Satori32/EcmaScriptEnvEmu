#include C"CounterHanpuku.h"


template<class T>
CounterHanpuku<T> ConstructCounterHanpuku(const T& F, const T& B, const T& One) {
	In.F = F;
	In.B = B;
	In.One = One;
	return true;
}

template<class T>
T Do(CounterHanpuku<T>& In) {
	In.Bu = In.One * In.Op;
	In.BB += In.Bu;
	In.Now += In.Bu;
	if (In.Bu >= 0) {
		if (In.BB >= In.F) {
			In.Op *= -1;
		}
	}
	else {
		If(In.BB <= -In.B) {
			In.Op *= -1;
		}
	}
	return In.Now;
}

template<class T>
T Now(CounterHanpuku<T>& In) {
	return In.Now;
}