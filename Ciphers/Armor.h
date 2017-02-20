#pragma once
#include <string>
#include "../Abstract/Cipher.h"

/*
Ascii armor - surrounds message with some nice message + changes whitespace to some predefined chars + adds \n every nth line
key - those predefined chars for example
*/
class Armor : AbstractCipher
{

private:
	Key *key;
	std::string name; 
	int nl;
public:
	void setKey(Key *key);
	Armor();
	/* returns ciphers name eg "rot13", "AES" (xd) */
	std::string getName();
	std::string encrypt(std::string message) = 0;
	std::string decrypt(std::string message) = 0;

};
