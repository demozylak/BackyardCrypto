#pragma once
#include <string>
#include <sstream>
#include <vector>
#include <stdint.h>

#include "../Abstract/Input.h"
#include "Key.h"
#include "Iterator.h"
#include "Iterable.h"

using namespace std;
/*
This class is iterable, so you have to implement Iterable's methods
It has table of instances of Key and methods to acces them (from iterable)
*/
class KeyReader : public Iterable<Key*>
{

protected:

	vector<Key*> key_table;

	Key* getElement(unsigned int n);
	unsigned int getLength();
	
public:

	KeyReader(AbstractInput *input);
	~KeyReader();

	Iterator<Key*>* getIterator();
	
};

