#include <assert.h>
#include "MathAlphabet.h" //i made this file MANUALLY inside /Ciphers, why the hell does it appear to be in main folder?
using namespace std;
MathAlphabet::MathAlphabet()
{
}


MathAlphabet::~MathAlphabet()
{
}

void MathAlphabet::setKey(Key * key)
{
	this->key = key;
}


string MathAlphabet::getName() {
	return "MathAlphabet";
}

string MathAlphabet::decrypt(string message)
{
	return string();
}

string MathAlphabet::encrypt(string message)
{
	/*does NOT encrypt any sign unless it is: a b c d e f g h i j k l m o n r s t u v w x y z*/


	/*changes every letter from the message into another letter described in the encryption key
	if the encryption key is eg alphabet but read from the end, then it looks like this:
	a b c d e f g h i j k l m n o p q r s t u v w x y z <----- normal alphabet
	z y x w v u t s r q p o n m l k j i h g f e d c b a <----- provided key, it'll surely be something entirely different
	every "a" changes into "z", every "d" into "w" et cetera*/
	string alfabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string klucz = key->getPassword(); //as I understood, this password is the same as the key that will be needed
	for (int i = 0; i < klucz.size(); i++) {
		klucz.at(i) = toupper(klucz.at(i));				//casts klucz to uppercase
	}
	for (int i = 0; i < message.length; i++)
	{
		message.at(i) = toupper(message.at(i));
	}

	assert(alfabet.length == klucz.length);   //kinda obvious what it does; the problem is whether we should immidiately stop program (assert), or do something else - to be discussed

	int temp;
	for (int i = 0; i < message.length; i++)
	{
		temp = klucz.find(message.at(i));
		message.at(i) = klucz.at(temp);
	}
	//need to make unit test here to check if this works
	return message;
}
