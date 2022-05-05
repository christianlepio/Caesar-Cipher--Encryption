#include<iostream>
using namespace std;

int main()
{
	//Encryption
	string text;

	
	cout << "Enter a plaintext: ";
	getline(cin , text);
	cout<<"\n Enter your desire number key: ";
	cin>>numkey;
	
	for(int count = 0; count < text.length() ; count++)
	{
		text[count] = tolower(text[count]);
		if(isalpha(text[count]))
		{
			for(int i = 1 ; i <= numkey ; i++)
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
#include<iostream>
using namespace std;

int main()
{
	//Encryption
	string text;
	int numkey=0;
	
	cout << "Enter a plaintext: ";
	getline(cin , text);
	cout<<"\n Enter your desire number key: ";
	cin>>numkey;
	
	for(int count = 0; count < text.length() ; count++)
	{
		text[count] = tolower(text[count]);
		if(isalpha(text[count]))
		{
			for(int i = 1 ; i <= numkey ; i++)
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
