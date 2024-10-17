#include "AnyFlatMap.h"

template<class T>
AnyFlatMap<T> ConstructAnyFlatMap(size_t Capacity) {
	AnyFlatMap F;
	F.F = ConstructFlatMap<AnyFlatMap, T>(Capacity);

	return F;
}

template<class T>
bool Free(AnyFlatMap<T>& In) {
	Clear(F.F);
	return Free(In.F);
}
template<class T>
T* Index(AnyFlatMap<T>& In, AnyIndexer P) {
	for (size_t i = 0; i < Size(In.F.V); i++) {
		if (Index(In.F.V), i) == NULL){return true; }
		if (EQ(Index(In.F.V, i)->P, P) == true) { return &Index(In.F.V, i)->V; }
	}
	return NULL;
}

template<class T>
bool Push(T& In, const Item<AnyIndexer, T>& X) {
	if (Push(In.F.V, X) == false) { return false; };
	if (Index(In.F, V, Size(In.F.V) - 1) == NULL) { return false; };
	Index(In.F, V, Size(In.F.V) - 1)->P.P = In.F.I++;
	Sort(In);

	return true;
}
template<class T>
bool Sort(AnyFlatMap<T>& In) {
	for (size_t i = 0; i < Size(In); i++) {
		for (size_t j = i + 1; j < Size(In) - 1; j++) {
			if (UpperRight(*Index(In, i)) - P), (*Index(In, j))->P) == 1) {
				Swap(*Index(In, i), *Index(In, j));
			}
		}
	}
	return true;
}