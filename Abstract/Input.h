#pragma once
#include <string>
/* uses i/o */
class AbstractInput
{
public:
	/* param like filename (in case of stdin may be prompt string)*/
	AbstractInput(std::string param);
	/* returns full string from an input */
	virtual std::string getString() = 0;
};

