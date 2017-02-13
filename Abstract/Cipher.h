#pragma once
#include <string>
#include "Key.h"

/*
Ciphers derivate from this
*/
class AbstractCipher
{
public:
	/* algorithms key as param */
	AbstractCipher(Key &key);

	/* returns ciphers name eg "rot13", "AES" (xd) */
	virtual std::string getName() = 0;

	virtual std::string decrypt(std::string message) = 0;
	virtual std::string encrypt(std::string message) = 0;
};

