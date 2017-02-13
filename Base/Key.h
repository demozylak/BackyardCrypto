#pragma once
#include <string>

/* holds cipher name and passphrase to it */
class Key
{
public:
	/* method - cipher name */
	Key(std::string method, std::string password);
	
	virtual std::string getMethod();
	virtual std::string getPassword();
};

