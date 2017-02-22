#include "Ciphers\RotN.h"

using namespace std;

RotN::RotN()
{
}


RotN::~RotN()
{
}

void RotN::setKey(Key * key)
{
	this->key = key;
}

string RotN::getName()
{
	return "RotN";
}

string RotN::encrypt(std::string message) 
{
	//convert password(string) on  int
	string password = key->getPassword();

	int N = atoi(password.c_str());
	
	//encrypt
	for (int i = 0; i<message.length(); i++)
	{
		int sign = message[i];
		if (sign >= 65 && sign <= 90)//signs belongs to A-Z
		{
			sign = sign-65;
			sign = sign+N;
			sign = sign%26;
			message[i] = sign + 65;
		}
		if (sign >= 97 && sign <= 122)//signs belongs to a-z
		{
			sign = sign - 97;
			sign = sign + N;
			sign = sign % 26;
			message[i] = sign + 97;
		}
	}
	return message;
}

std::string RotN::decrypt(std::string message) 
{
	//convert password(string) on  int
	string password = key->getPassword();

	int N = atoi(password.c_str());

	//decrypt
	for (int i = 0; i<message.length(); i++)
	{
		int sign = message[i];
		if (sign >= 65 && sign <= 90)//signs belongs to A-Z
		{
			sign = sign - 65;
			sign = sign - N;
			sign = sign % 26;
			if(sign >= 0) message[i] = sign + 65;
			if (sign < 0) message[i] = 91 + sign;

		}
		if (sign >= 97 && sign <= 122)//signs belongs to a-z
		{
			sign = sign - 97;
			sign = sign - N;
			sign = sign % 26;
			if (sign >= 0) message[i] = sign + 97;
			if (sign < 0) message[i] = 123 + sign;
		}
	}
	return message;
}
