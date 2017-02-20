#pragma once
#include <string>

/* 
class that is returned from iterable and is used to access elements
*/
template <typename T> class Iterator
{
public:
	//Iterator();
	virtual T next() = 0; // fetch the next element
	virtual bool isEnd() = 0; // does the next element exist ?
	

};

