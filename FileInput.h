#pragma once
#include "Abstract\Input.h"
#include <fstream>
#include <iostream>
class FileInput :
	public AbstractInput
{
protected:
	std::string param;
	std::ifstream plik;
public:
	FileInput(std::string param);
	~FileInput();
//returns file content in a single string; changes "\n" into " ", to make it look like the message is big oneliner
	std::string getString();
};

