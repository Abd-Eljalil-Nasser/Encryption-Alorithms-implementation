#include<iostream>
#include<string>

int main()
{
	long long number;
	std::cin >> number;
	std::string input;
	std::cin >> input;
	for (int i = 0;i < input.length();i++)
	{
		int x = (int)input[i]-65;
		x = ((number) % 26 + x)%26;
		x = x + 65;
		input[i] = (char)x;
	}
	std::cout << input;
}