#pragma once
#include <string>
#include "../Abstract/Input.h"
#include "Key.h"
#include "Iterator.h"
#include "Iterable.h"

/*
This class is iterable, so you have to implement Iterable's methods
It has table of instances of Key and methods to acces them (from iterable)
*/
class KeyReader : Iterable<Key>
{

public:
	/* 
	Read keys from input. Keys are in this schema:
	<cipher1 name>
	<key to cipher1>
	<cipher2 name>
	<key to cipher2>
	...
	...
	*/
	KeyReader(AbstractInput *input);

	
};

