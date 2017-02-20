#include "FileInput.h"
using namespace std;

FileInput::FileInput(std::string param) :AbstractInput("")
{
	this->param = param;
	plik.open(param);
	if (!plik.is_open()) {
		cout << "File is not opened." << endl;	//idk what is the proper way to handle it without immidiately exiting program
	}										//I think it's best to let the user handle it him/herself
}

FileInput::~FileInput()
{
	plik.clear();
	plik.close();
}

std::string FileInput::getString()
{
	string wyjscie;
	string message;
	if (plik.is_open())
	{
		while (getline(plik, message))
		{
			wyjscie.append(message + "\n");
		}
	}
	return wyjscie;
}