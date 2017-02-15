#pragma once
#include <string>
#include <algorithm>
#include "Abstract\Cipher.h"

class MathAlphabet : AbstractCipher
{
protected:
	Key *key;

public:
	MathAlphabet();
	~MathAlphabet();

	void setKey(Key *key);
	std::string getName();
	std::string decrypt(std::string message);
	std::string encrypt(std::string message);
};
