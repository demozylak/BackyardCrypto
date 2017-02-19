

#include "Base\Message.h"


using namespace std;


Message::Message(AbstractInput *input){

	msg = input->getString();

}

/* pass message to output */
Message* Message::outMessage(AbstractOutput *output){

	output->outString(msg);
	return this;
}




/* visitor pattern */
Message* Message::encrypt(AbstractCipher *cipher){

	msg = cipher->encrypt(msg);
	return this;
}


Message* Message::decrypt(AbstractCipher *cipher){

	msg = cipher->decrypt(msg);
	return this;
}
