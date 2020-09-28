#include<iostream>
#include<string>
#include<math.h>
using std::string;
using std::cin;

int main()
{
	int key;
	cin >> key;
	int * matrix = new int[key];
	for (int i=0;i < key;i++)
	{
		std::cin>> matrix[i];
	}
	string text;
	cin >> text;
	int i = 0;
	int root = sqrt(key);
	string result = "";
	while(1)
	{
		string x = "";
		int j = 0;
		while (i != text.length() && j!= root)
		{
			x = x+text[i];
			j++;
			i++;
		}
		if (j < root)
		{
			while (root - j != 0)
			{
				x = x + "X";
				j++;
			}
		}
		for (int k = 0;k < root;k++)
		{
			int resultvalue = 0;
			for (int m = 0;m < root;m++)
			{
				resultvalue = (matrix[k*root + m] % 26) * (((int)x[m]-65)%26)+ resultvalue;
			}
			result = result + (char)(resultvalue % 26 + 65);
		}
		if (i == text.length())
		{
			break;
		}
	}
	std::cout << result;
}
