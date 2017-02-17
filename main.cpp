/* BackyardCrypto.exe (-e|-d) [messagefile] [keyfile] [-o file] 

eg
BackyardCrypto.exe -e msg.txt -o kupa.txt			# asks for key (stdin), encrypt, out to kupa.txt
BackyardCrypto.exe -d								# asks for msg and key , decrypt, stdout
BackyardCrypto.exe -e msg.txt key.txt				# encrypt, stdout

*/

#include <string>

#include "Abstract\Input.h"
//#include "FileInput.h"
#include "Base/KeyReader.h"
#include "Base/Iterator.h"
#include "Base/CipherLocator.h"
#include "Abstract/Cipher.h"
#include "Base/Message.h"
#include "StdOutput.h"

#include <string>
#include <iostream>
using namespace std;

int main(int argc, char** argv)
{

	class StdIn:public AbstractInput{
		public:
		StdIn(string a):AbstractInput("") {};
		string getString() {
			return "abc\nklucz1\nbca\nklucz2";
		}
	};

	AbstractInput *inq = new StdIn("");


	KeyReader *r = new KeyReader(inq);

	Iterator<Key*> *it = r->getIterator();
	while (!it->isEnd()) 
	{
		Key * a = it->next();
		cout << a->getMethod() << " : " << a->getPassword() << endl;
	}


	delete r;

	return 0;
}