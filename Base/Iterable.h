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
	virtual T getElement(unsigned int n) = 0;
	/* get number of elements */
	virtual unsigned int getLength() = 0;
public:
	/* create and return iterator */
	virtual Iterator<T>* getIterator() = 0;

};

