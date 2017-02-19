/* BackyardCrypto.exe (-e|-d) [messagefile] [keyfile] [-o file] 

eg
BackyardCrypto.exe -e msg.txt -o kupa.txt			# asks for key (stdin), encrypt, out to kupa.txt
BackyardCrypto.exe -d								# asks for msg and key , decrypt, stdout
BackyardCrypto.exe -e msg.txt key.txt				# encrypt, stdout

*/

int main(int argc, char** argv)
{

	//Validate args
	//Check if params are correct(show help otherwise)
	//set variables like  (empty string if no param given)
	//string message_filename, key_filename, out_filename


	//Interpret args and create KeyReader and Message


	//get iterator from KeyReader, iterate over it, decipher message


	//out Message depending on args
	
	return 0;
}