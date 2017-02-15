#pragma once
#include <string>

/* holds cipher name and passphrase to it */
class Key
{
protected:
	std::string method;
	std::string password;

public:
	/* method - cipher name */
	Key(std::string method, std::string password);
	
	virtual std::string getMethod	 ();	//returns method name
	virtual std::string getPassword();	//returns password
};

