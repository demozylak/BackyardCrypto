/*
*	Kluczem do owego szyfru jest wyraz GADERYPOLUKI podzielony na sylaby:
*	GA - DE - RY - PO - LU - KI
*	Metoda szyfrowania polega na podmienianiu liter w szyfrowanym wyrazie.
*	Zamiana liter odbywa siê parami. Jeœli dana litera nie posiada pary pozostaje
*	bez zmian
*/




#include "Ciphers\Gaderypoluki.h"

using namespace std;

Gaderypoluki::Gaderypoluki(Key *key) : AbstractCipher(NULL){
	this->key = key;
}





Gaderypoluki::~Gaderypoluki(){

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

	const char cipher[] = { "GADERYPOLUKI" };


	//Converting all letters to uppercase
	transform(message.begin(), message.end(), message.begin(), ::toupper);


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