#pragma once
#include <string>
#include "../Base/Key.h"

/*
Ciphers derivate from this
*/
class AbstractCipher
{
public:
	
	AbstractCipher() {};
	
	/* algorithms key as param */
	virtual void setKey(Key *key) = 0;

	/* returns ciphers name eg "rot13", "AES" (xd) */
	virtual std::string getName() = 0;

	virtual std::string decrypt(std::string message) = 0;
	virtual std::string encrypt(std::string message) = 0;
};

