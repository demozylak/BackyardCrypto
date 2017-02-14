#pragma once
#include <string>
#include <algorithm>
#include "Abstract\Cipher.h"

class Gaderypoluki : AbstractCipher
{
protected:
	Key *key;

public:
	Gaderypoluki(Key *key);
	~Gaderypoluki();

	std::string getName();
	std::string decrypt(std::string message);
	std::string encrypt(std::string message);
};

