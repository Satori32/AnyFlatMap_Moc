#pragma once
#include <stdio.h>

#include "FlatMap.h"
#include "AnyIndexer.h"

template<class T>
struct AnyFlatMap {
	FlatMap<AnyIndexer, T> F;
};

template<class T> AnyFlatMap<T> ConstructAnyFlatMap(size_t Capacity);
template<class T> bool Free(AnyFlatMap<T>& In);
template<class T> T* Index(AnyFlatMap<T>& In, AnyIndexer P);
template<class T> bool Push(T& In, const Item<AnyIndexer, T>& X);
template<class T> bool Sort(AnyFlatMap<T>& In);
