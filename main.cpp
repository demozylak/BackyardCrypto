/* BackyardCrypto.exe (-e|-d) [messagefile] [keyfile] [-o file]

eg
BackyardCrypto.exe -e msg.txt -o kupa.txt			# asks for key (stdin), encrypt, out to kupa.txt
BackyardCrypto.exe -d								# asks for msg and key , decrypt, stdout
BackyardCrypto.exe -e msg.txt key.txt				# encrypt, stdout

*/

#include <string>

#include "Abstract\Input.h"
#include "FileInput.h"
#include "Base/KeyReader.h"
#include "Base/Iterator.h"
#include "Base/CipherLocator.h"
#include "Abstract/Cipher.h"
#include "Base/Message.h"
#include "StdOutput.h"


using namespace std;

int main(int argc, char** argv)
{
	string message_filename = "msg.txt";
	string key_filename = "key.txt";
	string out_filename = "";

	//Validate args
	//Check if params are correct(show help otherwise)
	//set variables like  (empty string if no param given)
	//string message_filename, key_filename, out_filename



	//Interpret args and create KeyReader and Message
	AbstractInput *msg_inp = new FileInput(message_filename);
	AbstractInput *key_inp = new FileInput(key_filename);
	AbstractOutput *output = new StdOutput("crypto msg");

	Message *msg = new Message(msg_inp);
	KeyReader *kr = new KeyReader(key_inp);




	//get iterator from KeyReader, iterate over it, decipher message
	Iterator<Key> *it = kr->getIterator();

	CipherLocator *locator = new CipherLocator;

	while (!it->end())
	{
		Key *k = it->next(); // get next key
		AbstractCipher *cipher = locator->getCipher(k); // get cipher

		msg->encrypt(cipher); // visit the message
	}

	//out Message depending on args
	msg->outMessage(output);


	return 0;
}