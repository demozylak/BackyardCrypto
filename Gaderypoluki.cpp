/*
*	Kluczem do owego szyfru jest wyraz GADERYPOLUKI podzielony na sylaby:
*	GA - DE - RY - PO - LU - KI
*	Metoda szyfrowania polega na podmienianiu liter w szyfrowanym wyrazie.
*	Zamiana liter odbywa siê parami. Jeœli dana litera nie posiada pary pozostaje
*	bez zmian
*/




#include "Ciphers\Gaderypoluki.h"

using namespace std;


Gaderypoluki::Gaderypoluki() : AbstractCipher (){

}

Gaderypoluki::~Gaderypoluki(){

}






void Gaderypoluki::setKey(Key * key){
	this->key = key;
}

string Gaderypoluki::getName(){

	return key->getMethod();

}






//Decrypting method works int same way as encrypting (you can decrypt using encrypting)
std::string Gaderypoluki::decrypt(std::string message){
	
	return encrypt(message);

}






/*Codes input message, returns changed input*/
string Gaderypoluki::encrypt(std::string message) {

	//Cipher code can be anything typed as key password (even amount of chars)
	string cipher_password = key->getPassword();

	//Checking if char amount in cipher is even 
	if (cipher_password.length() % 2 == 0) {
		
		const char *cipher = cipher_password.c_str();

		//Converting all letters to uppercase
		transform(message.begin(), message.end(), message.begin(), ::toupper);
		transform(cipher_password.begin(), cipher_password.end(),
			cipher_password.begin(), ::toupper);

		for (int i = 0; i < message.length(); i++) {

			for (int j = 0; j < strlen(cipher); j++) {


				if (message[i] == cipher[j]) {

					if (j % 2 == 0) {
						message[i] = cipher[j + 1];
						break;
					}
					else {
						message[i] = cipher[j - 1];
						break;
					}
				}


			}
		}

		return message;			//Returns uppercase, ciphered message

	}
	
	else {						
		//error message
		return message + " can't be encrypted!\n"
			+ "Char amount in key password has to be even!";
	}
}