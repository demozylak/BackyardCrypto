#pragma once
#include <string>
/* uses i/o */
class AbstractOutput
{
public:
	/* param like filename (in case of stdout may be additional message to print)*/
	AbstractOutput(std::string param);
	/* passes full string to output */
	virtual void outString(std::string msg) = 0;
};

