#pragma once
#include "Abstract\Output.h"
#include <iostream>
#include <fstream>
class FileOutput :
	public AbstractOutput
{
protected:
	std::string param;
	std::ofstream plik;
public:
	//param is path to file saved in .txt; don't append ".txt" to filename    
	FileOutput(std::string param); 
	~FileOutput();

	void outString(std::string msg);
};

