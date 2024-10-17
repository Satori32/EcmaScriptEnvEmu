#include <stdio.h>
#include <stdlib>

//not complate debug. compiler is confuse.

template<class T>
struct CounterHanpuku {
	T Now = 0;
	T F = 3;
	T B = 2;
	T One = 1;
	int Op = 1;
	T Bu = 0;
	T BB = 0;
};

template<class T> CounterHanpuku<T> ConstructCounterHanpuku(const T& F, const T& B, const T& One);
template<class T> T Do(CounterHanpuku<T>& In);
template<class T> T Now(CounterHanpuku<T>& In);