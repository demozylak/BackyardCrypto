#include "FileOutput.h"
using namespace std;
FileOutput::FileOutput(std::string param) :AbstractOutput("")
{
	this->param = param;
	plik.open(param + ".txt", ios::out | ios::app);	//could be done in one line, but "param" may be useful later, we'll see
	if(!plik.is_open())
		cout << "File is not opened." << endl;	//idk what is the proper way to handle it without immidiately exiting program
													//I think it's best to let the user handle it him/herself
}

FileOutput::~FileOutput()
{
	plik.clear();
	plik.close();
}

void FileOutput::outString(std::string msg)
{
		plik << msg << endl;
}
