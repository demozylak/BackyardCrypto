#include "Base\CipherLocator.h"


#include "Ciphers\Gaderypoluki.h"
#include "Ciphers\WhiteRemove.h"

CipherLocator::CipherLocator()
{
	ciphers = new AbstractCipher*[2];

	ciphers[0] = new Gaderypoluki();
	ciphers[1] = new WhiteRemove();

}


CipherLocator::~CipherLocator()
{
	for (int i = 0; i < 2; i++)
	{
		delete ciphers[i];
	}
	delete ciphers;
}

AbstractCipher * CipherLocator::getCipher(Key *key)
{
	for (int i = 0; i < 2; i++)
	{
		if (key->getMethod() == ciphers[i]->getName())
		{
			return ciphers[i];
		}
	}
	return NULL;
}