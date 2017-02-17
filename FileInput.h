#pragma once
#include "Abstract\Input.h"
class FileInput :
	public AbstractInput
{
public:
	FileInput(std::string param);
	~FileInput();

	std::string getString();
};

