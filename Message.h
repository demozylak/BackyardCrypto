#pragma once
#include <string>
#include "../Abstract/Cipher.h"
#include "../Abstract/Input.h"
#include "../Abstract/Output.h"


/*
Holds message
*/
class Message
{
public:
	/* read message from input */
	Message(AbstractInput *input);

	/* pass message to output */
	virtual Message* outMessage(AbstractOutput *output);

	/* visitor pattern */
	virtual Message* encrypt(AbstractCipher *cipher);
	virtual Message* decrypt(AbstractCipher *cipher);
private:
	std::string msg;
};

