#include<iostream>
#include <sstream>
#include<String>
using std::string;
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
int binraytodecimal(string input)
{
	if (input == "0000")
		return 0;
	else if (input == "0001")
		return 1;
	else if (input == "0010")
		return 2;
	else if (input == "0011")
		return 3;
	else if (input == "0100")
		return 4;
	else if (input == "0101")
		return 5;
	else if (input == "0110")
		return 6;
	else if (input == "0111")
		return 7;
	else if (input == "1000")
		return 8;
	else if (input == "1001")
		return 9;
	else if (input == "1010")
		return 10;
	else if (input == "1011")
		return 11;
	else if (input == "1100")
		return 12;
	else if (input == "1101")
		return 13;
	else if (input == "1110")
		return 14;
	else if (input == "1111")
		return 15;
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
	int pc1[56] ={57,49,41,33,25,17,9,1,58,50,42,34,26,18,10,2,59,51,43,35,27,19,11,3,60,52,44,36,63,55,47,39,31,23,15,7
		,62,54,46,38,30,22,14,6,61,53,45,37,29,21,13,5,28,20,12,4};
	int pc2 [48]= {14,17,11,24,1,5,3,28,15,6,21,10,23,19,12,4,26,8,16,7,27,20,13,2,41,52,31,37,47,55, 
		30,40,51,45,33,48,44,49,39,56,34,53,46,42,50,36,29,32};
	int Rotations[16] = {1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,1};
	string input= "";
	cin >> input;
	string binarytext = "";
	for (int i = 0;i < input.length();i++)
	{
		binarytext = binarytext +fromhHextoBinary(input[i]);
	}
	string output_of_Pc1 = "";
	for (int i = 0;i < 56;i++)
	{
		output_of_Pc1 = output_of_Pc1 + binarytext[pc1[i]-1];
	}
	string output = "";
	for (int i = 0;i < 16;i++)
	{
		string left_part = output_of_Pc1.substr(0, (output_of_Pc1.length() / 2));
		string right_part = output_of_Pc1.substr(output_of_Pc1.length()/2 , (output_of_Pc1.length() / 2));
		string temp_left = left_part.substr(0, Rotations[i]);
		string temp_right = right_part.substr(0, Rotations[i]);
		left_part = left_part.substr(Rotations[i], left_part.length() - Rotations[i]) + temp_left;
		right_part= right_part.substr(Rotations[i], right_part.length() - Rotations[i])+ temp_right;
		string output_of_stage = "";
		output_of_Pc1 = left_part + right_part;
		for (int k = 0;k < 48;k++)
		{
			output_of_stage = output_of_stage +output_of_Pc1[pc2[k] - 1];
		}
		for (int k = 0;k < 12;k++)
		{
			string temp = "";
			for (int j = (4 * k);j < (4 * k + 4);j++)
			{
				temp = temp + output_of_stage[j];
			}
			output = output + fromhBinarytohex(temp);
		}
		output = output + "\n";
	}
	cout << output;
}
