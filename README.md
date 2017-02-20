# BackyardCrypto

Project created for educational purposes

Example usage:
<pre>
BackyardCrypto.exe (-e|-d) [messagefile] [keyfile] [-o file] 

BackyardCrypto.exe -e msg.txt -o out.txt			# asks for key (stdin), encrypt, out to out.txt
BackyardCrypto.exe -d								# asks for msg and key , decrypt, stdout
BackyardCrypto.exe -e msg.txt key.txt				# encrypt, stdout
</pre>

Supported ciphers:
<pre>
RotN (in progress..)
</pre>

Key should fall to this schema:
<pre>
Cipher1 name
Pass to Cipher1
Cipher2 name
Pass to Cipher2
..
..
</pre>