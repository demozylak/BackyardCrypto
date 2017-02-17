#pragma once
#include <string>

/* 
class that is returned from iterable and is used to access elements
*/
template <typename T> class Iterator
{
public:
	Iterator();
	T *next(); // fetch the next element
	bool end(); // does the next element exist ?
	

};

