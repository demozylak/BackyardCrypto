#include "Base/KeyReader.h"
#include "Base/Iterable.h"

KeyReader::KeyReader(AbstractInput *input)
{
	// populate the key table
	string keyfile = input->getString();
	

	stringstream iss(keyfile);

	string line1;
	string line2;
	while (getline(iss, line1))
	{
		getline(iss, line2); // not very nice solution

		key_table.push_back(new Key(line1,line2)); // add new key to the table

	}

}


KeyReader::~KeyReader()
{
	while (!key_table.empty())
	{
		delete key_table.back();
		key_table.pop_back(); //does it destroy the last element ?
	}
}


Iterator<Key*>* KeyReader::getIterator()
{
	class It :public Iterator<Key*> {
		protected:
			KeyReader *kr;
			uint32_t act;
		public:
			It(KeyReader * kr) { this->kr = kr; act = 0; }
			Key *next(){ return kr->getElement(act++); }
			bool isEnd(){ return act >= kr->getLength(); }
	};
	
	return new It(this); 
		
}


Key* KeyReader::getElement(unsigned int n)
{
	return key_table.at(n);
}
unsigned int KeyReader::getLength()
{
	return key_table.size();
}

