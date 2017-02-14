#include "StdOutput.h"

using namespace std;

StdOutput::StdOutput(string param) : AbstractOutput("") //this actually does not call base constructor
{
	this->param = param; // set the param
}


StdOutput::~StdOutput()
{
}


void StdOutput::outString(string msg)
{
	cout << "[ " << param << " ] \n";	// cout param first
	cout << msg << "\n\n";				// cout the msg
}