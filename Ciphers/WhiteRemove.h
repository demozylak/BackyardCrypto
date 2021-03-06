#pragma once
#include <string>
#include <algorithm>
#include <cctype>
#include "../Abstract/Cipher.h"
/*
encode - removes all whitespace from message
decode - do nothing (cant tell where they were anyway xD)
*/
class WhiteRemove :
	public AbstractCipher
{
protected:
	Key *key;

public:
	WhiteRemove();
	~WhiteRemove();

	void setKey(Key *key);
	std::string getName();
	std::string decrypt(std::string message);
	std::string encrypt(std::string message);
};
