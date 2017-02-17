#pragma once
#include <string>
#include "Iterator.h"
/*
Specification for class that can be iterated upon
*/
template <typename T> class Iterable
{
protected:
	friend class Iterator<T>;
	/* return n-t element */
	T getElement(unsigned int n);
	/* get number of elements */
	unsigned int getLength();
public:
	/* create and return iterator */
	Iterator<T>* getIterator();

};

