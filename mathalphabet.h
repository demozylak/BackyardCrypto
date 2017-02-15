#pragma once
#include "Abstract\Cipher.h"
class MathAlphabet :
	public AbstractCipher
{
public:
	MathAlphabet();
	~MathAlphabet();
	void setKey(Key *key);
	std::string getName();
	std::string decrypt(std::string message);
	std::string encrypt(std::string message);
protected:
	Key *key;
};

