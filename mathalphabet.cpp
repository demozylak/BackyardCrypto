
#include "MathAlphabet.h" //i made this file MANUALLY inside /Ciphers, why the hell does it appear to be in main folder?
#include <assert.h>
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


string MathAlphabet::encrypt(string message)
{
	/*does NOT encrypt any sign unless it is: a b c d e f g h i j k l m o n r s t u v w x y z*/
	/*idk whether i should use whiteremove here or use sth i did myself, will check out later*/

	/*changes every letter from the message into another letter described in the encryption key
	if the encryption key is eg alphabet but read from the end, then it looks like this:
	a b c d e f g h i j k l m n o p q r s t u v w x y z <----- normal alphabet
	z y x w v u t s r q p o n m l k j i h g f e d c b a <----- provided key, it'll surely be something entirely different
	every "a" changes into "z", every "d" into "w" et cetera*/
	string alfabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string klucz = key->getPassword();
	bool czy_w_kluczu_powtarzaja_sie_znaki = checkForRepeatingCharacters(klucz);
	assert(!czy_w_kluczu_powtarzaja_sie_znaki); //negation 'coz checkForRepeatingCharacters returns true 
												//when there are duplicates in a string

	assert(alfabet.length() == klucz.length());   //kinda obvious what it does; the problem is whether we should immidiately stop program (assert), or do something else - to be discussed
	for (int i = 0; i < klucz.length(); i++) {
		klucz.at(i) = toupper(klucz.at(i));				//casts klucz to uppercase
	}
	for (int i = 0; i < message.length(); i++)
	{
		message.at(i) = toupper(message.at(i));
	}

	string str;
	string answer = "";
	int temp;
	for (int i = 0; i < message.length(); i++)
	{
		temp = alfabet.find(message.at(i));
		str = string(1, klucz.at(temp));
		answer.append(str);
	}
	//need to make unit test here to check if this works
	return answer;
}

bool MathAlphabet::checkForRepeatingCharacters(std::string message)
{
	int znakiASCII[256] = { 0, };
	char char_from_string;
	int int_from_char;
	for (int i = 0; i <message.length(); i++)
	{
		char_from_string = message[i];
		int_from_char = (int)char_from_string;
		znakiASCII[int_from_char]++;
		if (znakiASCII[int_from_char] > 1) {
			return true;
		}
	}
	return false;
}

string MathAlphabet::decrypt(string message)
{	//same as encrypt, but alphabet is now klucz, and klucz is now alphabet
	string klucz = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string alfabet = key->getPassword();

	bool czy_w_kluczu_powtarzaja_sie_znaki = checkForRepeatingCharacters(alfabet);
	assert(!czy_w_kluczu_powtarzaja_sie_znaki); //negation 'coz checkForRepeatingCharacters returns true 
												//when there are duplicates in a string

	assert(alfabet.length() == klucz.length());   //kinda obvious what it does; the problem is whether we should immidiately stop program (assert), or do something else - to be discussed
	for (int i = 0; i < klucz.length(); i++) {
		klucz.at(i) = toupper(klucz.at(i));				//casts klucz to uppercase
	}
	for (int i = 0; i < message.length(); i++)
	{
		message.at(i) = toupper(message.at(i));
	}

	string str;
	string answer = "";
	int temp;
	for (int i = 0; i < message.length(); i++)
	{
		temp = alfabet.find(message.at(i));
		str = string(1, klucz.at(temp));
		answer.append(str);
	}
	//need to make unit test here to check if this works
	return answer;
}