#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::vector;
using std::cin;
using std::cout;
string fromhHextoBinary(char input)
{
	if (input == '0')
	{
		return "0000";
	}
	else if (input == '1')
	{
		return "0001";

	}
	else if (input == '2')
	{
		return "0010";
	}
	else if (input == '3')
	{
		return "0011";
	}
	else if (input == '4')
	{
		return "0100";
	}
	else if (input == '5')
	{
		return "0101";
	}
	else if (input == '6')
	{
		return "0110";
	}
	else if (input == '7')
	{
		return "0111";
	}
	else if (input == '8')
	{
		return "1000";
	}
	else if (input == '9')
	{
		return "1001";
	}
	else if (input == 'A')
	{
		return "1010";
	}
	else if (input == 'B')
	{
		return "1011";
	}
	else if (input == 'C')
	{
		return "1100";
	}
	else if (input == 'D')
	{
		return "1101";
	}
	else if (input == 'E')
	{
		return "1110";
	}
	else if (input == 'F')
	{
		return "1111";
	}
}
char fromhBinarytohex(string input)
{
	if (input == "0000")
	{
		return '0';
	}
	else if (input == "0001")
	{
		return '1';

	}
	else if (input == "0010")
	{
		return '2';
	}
	else if (input == "0011")
	{
		return '3';
	}
	else if (input == "0100")
	{
		return '4';
	}
	else if (input == "0101")
	{
		return '5';
	}
	else if (input == "0110")
	{
		return '6';
	}
	else if (input == "0111")
	{
		return '7';
	}
	else if (input == "1000")
	{
		return '8';
	}
	else if (input == "1001")
	{
		return '9';
	}
	else if (input == "1010")
	{
		return 'A';
	}
	else if (input == "1011")
	{
		return 'B';
	}
	else if (input == "1100")
	{
		return 'C';
	}
	else if (input == "1101")
	{
		return 'D';
	}
	else if (input == "1110")
	{
		return 'E';
	}
	else if (input == "1111")
	{
		return 'F';
	}
}
int main()
{
	int outputnumber;
	cin >> outputnumber;
	vector<int> out(outputnumber);
	for (int i = 0;i < outputnumber;i++)
	{
		cin >> out[i];
	}
	int input;
	cin >> input;
	string text = "";
	for (int i = 0;i < input / 4;i++)
	{
		char temp;
		cin >> temp;
		text = text + fromhHextoBinary(temp);
	}
	string result = "";
	for (int i = 0;i < outputnumber;i++)
	{
		result = result + text[out[i]-1];
	}
	string result2 = "";
	for (int i = 0;i < (outputnumber/4);i++)
	{
		string temp = "";
		for (int j = (4*i);j < (4*i+4);j++)
		{
			temp = temp + result[j];
		}
		result2 = result2 + fromhBinarytohex(temp);
	}
	cout << result2;

}