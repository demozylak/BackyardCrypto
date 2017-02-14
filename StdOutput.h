#pragma once
#include "Abstract\Output.h"
#include <iostream>
class StdOutput :
	public AbstractOutput
{
protected:
	std::string param;
public:
	StdOutput(std::string param);
	~StdOutput();

	void outString(std::string msg);
};

