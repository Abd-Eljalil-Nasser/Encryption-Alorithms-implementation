#include<iostream>
#include <sstream>
#include<String>
using std::string;
using std::cin;
using std::cout;
string fromhHextoBinary(char input)
{
	if (input == '0')
	{return "0000";}
	else if (input == '1')
	{return "0001";}
	else if (input == '2')
	{return "0010";}
	else if (input == '3')
	{return "0011";}
	else if (input == '4')
	{return "0100";}
	else if (input == '5')
	{return "0101";}
	else if (input == '6')
	{return "0110";}
	else if (input == '7')
	{return "0111";}
	else if (input == '8')
	{return "1000";}
	else if (input == '9')
	{return "1001";}
	else if (input == 'A')
	{return "1010";}
	else if (input == 'B')
	{return "1011";}
	else if (input == 'C')
	{return "1100";}
	else if (input == 'D')
	{return "1101";}
	else if (input == 'E')
	{return "1110";}
	else if (input == 'F')
	{return "1111";}
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
	string input_block = "";
	string key_block = "";
	cin >> input_block;
	cin >> key_block;
	int s_box[8][4][16] = { { { 14,4,13,1,2,15,11,8,3,10,6,12,5,9,0,7 },{ 0,15,7,4,14,2,13,1,10,6,12,11,9,5,3,8 },{ 4,1,14,8,13,6,2,11,15,12,9,7,3,10,5,0 },{ 15,12,8,2,4,9,1,7,5,11,3,14,10,0,6,13 } },
	{ { 15,1,8,14,6,11,3,4,9,7,2,13,12,0,5,10 },{ 3,13,4,7,15,2,8,14,12,0,1,10,6,9,11,5 },{ 0,14,7,11,10,4,13,1,5,8,12,6,9,3,2,15 },{ 13,8,10,1,3,15,4,2,11,6,7,12,0,5,14,9 } },
	{ { 10,0,9,14,6,3,15,5,1,13,12,7,11,4,2,8 },{ 13,7,0,9,3,4,6,10,2,8,5,14,12,11,15,1 },{ 13,6,4,9,8,15,3,0,11,1,2,12,5,10,14,7 },{ 1,10,13,0,6,9,8,7,4,15,14,3,11,5,2,12 } },
	{ { 7,13,14,3,0,6,9,10,1,2,8,5,11,12,4,15 },{ 13,8,11,5,6,15,0,3,4,7,2,12,1,10,14,9 },{ 10,6,9,0,12,11,7,13,15,1,3,14,5,2,8,4 },{ 3,15,0,6,10,1,13,8,9,4,5,11,12,7,2,14 } },
	{ { 2,12,4,1,7,10,11,6,8,5,3,15,13,0,14,9 },{ 14,11,2,12,4,7,13,1,5,0,15,10,3,9,8,6 },{ 4,2,1,11,10,13,7,8,15,9,12,5,6,3,0,14 },{ 11,8,12,7,1,14,2,13,6,15,0,9,10,4,5,3 } },
	{ { 12,1,10,15,9,2,6,8,0,13,3,4,14,7,5,11 },{ 10,15,4,2,7,12,9,5,6,1,13,14,0,11,3,8 },{ 9,14,15,5,2,8,12,3,7,0,4,10,1,13,11,6 },{ 4,3,2,12,9,5,15,10,11,14,1,7,6,0,8,13 } },
	{ { 4,11,2,14,15,0,8,13,3,12,9,7,5,10,6,1 },{ 13,0,11,7,4,9,1,10,14,3,5,12,2,15,8,6 },{ 1,4,11,13,12,3,7,14,10,15,6,8,0,5,9,2 },{ 6,11,13,8,1,4,10,7,9,5,0,15,14,2,3,12 } },
	{ { 13,2,8,4,6,15,11,1,10,9,3,14,5,0,12,7 },{ 1,15,13,8,10,3,7,4,12,5,6,11,0,14,9,2 },{ 7,11,4,1,9,12,14,2,0,6,10,13,15,3,5,8 },{ 2,1,14,7,4,10,8,13,15,12,9,0,3,5,6,11 } } };
	string input_binarytext = "";
	string input_binaryket = "";
	for (int i = 0;i < input_block.length();i++)
	{
		input_binarytext = input_binarytext + fromhHextoBinary(input_block[i]);
	}
	string expansion_P_Box_output = "";
	int expansion_P_Box[48]={32,1,2,3,4,5,4,5,6,7,8,9,8,9,10,11,12,13,12,13,14,15,16,17,16,17,18,19,20,21,20,21,22,23,24,25,24,25,26,27,28,29,28,29,30,31,32,1};
	for (int i = 0;i < 48;i++)
	{
		expansion_P_Box_output = expansion_P_Box_output + input_binarytext[expansion_P_Box[i]-1];
	}
	for (int i = 0;i < key_block.length();i++)
	{
		input_binaryket = input_binaryket + fromhHextoBinary(key_block[i]);
	}
	
	for (int i = 0;i < 48;i++)
	{
		if (expansion_P_Box_output[i] == input_binaryket[i])
			expansion_P_Box_output[i] = '0';
		else
			expansion_P_Box_output[i] = '1';
	}
	int m = 0;
	string S_output = "";
	int index = 0;
	while (m<expansion_P_Box_output.length())
	{
		int temp_m = m;
		int j = temp_m;
		string temp = "";
		while ((j != temp_m + 6) && j<expansion_P_Box_output.length())
		{
			temp = temp + expansion_P_Box_output[m];
			j++;
			m++;
		}
		int row = binraytodecimal("00" + temp.substr(0, 1) + temp.substr(5, 1));
		int comlumn = binraytodecimal(temp.substr(1, 4));
		std::stringstream sstream;
		sstream << std::hex << s_box[index][row][comlumn];
		S_output = S_output + sstream.str();
		index++;
	}
	int Straight_P_Box[32] = {16,7,20,21,29,12,28,17,1,15,23,26,5,18,31,10,2,8,24,14,32,27,3,9,19,13,30,6,22,11,4,25};
	string result = "";
	for (int k = 0;k < S_output.length();k++)
	{
		if ((int)S_output[k] >= 97 && (int)S_output[k] <= 122)
			S_output[k] = S_output[k] - 32;
	}
	string Straight_P_Box_input = "";
	for (int k = 0;k < S_output.length();k++)
	{
		Straight_P_Box_input = Straight_P_Box_input + fromhHextoBinary(S_output[k]);
	}
	for (int k = 0;k < 32;k++)
	{
		result = result+ Straight_P_Box_input[Straight_P_Box[k]-1];
	}
	string result2 = "";
	for (int k = 0;k <8;k++)
	{
			string temp = "";
			for (int j = (4 * k);j < (4 * k + 4);j++)
			{
				temp = temp + result[j];
			}
			result2 = result2 + fromhBinarytohex(temp);
	}
	cout << result2;
}
