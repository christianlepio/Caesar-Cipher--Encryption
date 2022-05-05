#include<iostream>
using namespace std;

int main()
{
	//Encryption
	string text;
	
	cout << "Enter a plaintext: ";
	getline(cin , text);
	
	for(int count = 0; count < text.length() ; count++)
	{
		text[count] = tolower(text[count]);
		if(isalpha(text[count]))
		{
			for(int i = 1 ; i <= 3 ; i++)
			{
				if(text[count] == 'z')
					text[count] = 'a';
				else
					++text[count];
			}
		}
		
	}
	cout << "\n\aEquivalent ciphertext: " << text << endl;
	
	
	
	
	
	return 0;
}
