#include "WhiteRemove.h"

using namespace std;

WhiteRemove::WhiteRemove(Key *key) : AbstractCipher(NULL){
	
	this->key = key;

}

WhiteRemove::~WhiteRemove(){

}

string WhiteRemove::getName(){
	return key->getMethod();
}

/*Function	: removes all spacebars from string */
string WhiteRemove::decrypt(std::string message){

	message.erase(remove_if(message.begin(), message.end(), isspace), message.end());

	return message;
}


/*Returns message*/
