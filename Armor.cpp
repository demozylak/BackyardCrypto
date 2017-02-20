


#include "Ciphers\Armor.h"
#include <string>
using namespace std;



Armor::Armor() : AbstractCipher(){
	this->name = "Armor";
	this->nl = 50;
}





void Armor::setKey(Key * key){
	this->key = key;
}

string Armor::getName(){
	return this->name;
}

std::string encrypt(std::string message){
	
	/* Step 1:Changing whitespace  to a "+"  */
	for (unsigned int i = 0; i < message.length(); i++){
		if ((const char*)message[i] == " " || message[i] == 32) {
			message[i] = (char)"+";
		}
	}
	/* Step 2: Adds  newline every predefined = 50 */
	for (unsigned int i = 0; i < message.length(); i++){
		int k = 0;
		if ((i-k) % 50 == 0) {
			message.insert((i-k), (const char*)'\n');
        k++;
		}
	}

	/* Step 3: Put your junk in that box.  */

	std::string beginning = "---------------CODING YOUR MESSAGE----------------\n";
	std::string ending =    "\n---------------END OF YOUR MESSAGE----------------";


	message = beginning + message + ending;





	return message;

}


std::string decrypt(std::string message){


	
	return "decrypt";

}