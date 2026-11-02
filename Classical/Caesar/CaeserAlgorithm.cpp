#include<iostream>
#include<string>
using namespace std;

string encrypt(const string& plaintext, int k)
{
	string ciphertext = "";
	k = ((k % 26) + 26) % 26;

	for (char c : plaintext)
	{
		if (c >= 'A' && c <= 'Z')
		{
			ciphertext += 'A' + (c - 'A' + k) % 26; 
		}
		else if (c >= 'a' && c <= 'z')
		{
			ciphertext += 'a' + (c - 'a' + k) % 26;

		}
		else
		{
			ciphertext += c;
		}
		
	}
	return ciphertext;
}

string decrypt(const string& ciphertext, int k) {
	string plaintext = "";

	k = ((k % 26) + 26) % 26;

	for (char c : ciphertext) {
		if (c >= 'A' && c <= 'Z') {
			plaintext += 'A' + (c - 'A' - k + 26) % 26;
		}
		else if (c >= 'a' && c <= 'z') {
			plaintext += 'a' + (c - 'a' - k + 26) % 26;
		}
		else {
			plaintext += c;
		}
	}

	return plaintext;
}


int main()
{
	string plaintext; 
	int k;
	cout << "Enter plaintext:";
	getline(cin, plaintext); 
	cout << "Enter key (k):";
	cin >> k;
	
	string ciphertext = encrypt(plaintext, k);
	string decryption = decrypt(ciphertext, k);

	cout << "\nCiphertext: " << ciphertext << endl;
	cout << "Decrypted:  " << decryption << endl;
	
}
