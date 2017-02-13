#pragma once
#include <string>
#include "Key.h"
#include "../Abstract/Cipher.h"
/*
!!Has a static table with all ciphers!!
*/
class CipherLocator
{
public:
	/* Returns cipher reference by its key (key has ciphers name) */
	AbstractCipher * getCipher(Key &key);

};

