#pragma once
#include <string>
#include <algorithm>
#include "..\Abstract\Cipher.h"

class Gaderypoluki : public AbstractCipher
{
protected:
	Key *key;

public:
	Gaderypoluki();
	~Gaderypoluki();

	void setKey(Key *key);
	std::string getName();
	std::string decrypt(std::string message);
	std::string encrypt(std::string message);
};

