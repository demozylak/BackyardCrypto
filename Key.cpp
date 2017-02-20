#include "Key.h"

Key::Key(std::string method, std::string password)
{
	this->method = method;
	this->password = password;
}

std::string Key::getMethod()
{
	return this->method;
}

std::string Key::getPassword()
{
	return this->password;
}
