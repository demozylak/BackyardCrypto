#include "Ciphers/WhiteRemove.h"

using namespace std;

WhiteRemove::WhiteRemove() : AbstractCipher(){

}

WhiteRemove::~WhiteRemove(){

}

void WhiteRemove::setKey(Key * key){
	this->key = key;
}

string WhiteRemove::getName(){
	return "WhiteRemove";
}

/*Function	: removes all spacebars from string */
string WhiteRemove::decrypt(std::string message){

	message.erase(remove_if(message.begin(), message.end(), isspace), message.end());

	return message;
}

/*Does nothing so far*/
string WhiteRemove::encrypt(std::string message)
{
	return std::string();
}



