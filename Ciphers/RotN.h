#pragma once
#include <string>
#include "../Abstract/Cipher.h"


/*
https://en.wikipedia.org/wiki/ROT13
but for N not only 13
*/
class RotN : AbstractCipher
{
protected:
	Key *key;

public:
	RotN();
	~RotN();

	void setKey(Key *key);
	std::string getName();
	std::string decrypt(std::string message);
	std::string encrypt(std::string message);
};