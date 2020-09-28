#include<iostream>
#include<String>
#include <sstream>
int main()
{
	std::string key;
	std::string text;
	std::cin >> key;
	std::cin >> text;
	// "Vigenere"
	std::string result1 = "";
	// "Vernam"
	std::string result2 = "";
	int j = 0;
	for (int i = 0;i < text.length();i++)
	{
		result1 = result1 +(char)((((int)text[i] - 65) + ((int)key[j] - 65)) % 26 + 65);
		j = (j + 1) % key.length();
	}
	std::cout << "Vigenere: " << result1 << std::endl;
	j = 0;
	for (int i = 0;i < text.length();i++)
	{
		int x = text[i] ^ key[j];
		std::stringstream sstream;
		sstream << std::hex << x;
		std::string result = sstream.str();
		if (result.length() == 1)
		{
			result = result + result;
			result[0] = '0';
			if ((int)result[1] >=97 && (int)result[1]<=122)
			{
				result[1] = result[1] - 32;
			}
		}
		else
		{
			if ((int)result[0] >= 97 && (int)result[0] <= 122)
			{
				result[0] = result[0] - 32;
			}
			if ((int)result[1] >= 97 && (int)result[1] <= 122)
			{
				result[1] = result[1] -32 ;
			}
		}
		result2 = result2 + result;
		j = (j + 1) % key.length();
	}
	std::cout <<"Vernam: "<< result2 << std::endl;
	std::cout << "One-Time Pad: ";
	if (text.length() == key.length())
		std::cout << "YES";
	else
		std::cout << "NO";

}
