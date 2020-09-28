#include<iostream>
#include<string>
#include<math.h>
using std::string;
using std::cin;

int main()
{
	string keyword;
	cin >> keyword;
	string text;
	cin >> text;
	int matrix[25]; 
	int matrix2[25];
	for (int i = 0;i < 25;i++)
	{
		matrix[i] = 25;
	}
	int k = 0;
	for (int j = 0;j < keyword.length();j++)
	{
		if (keyword[j] == 'J')
		{
			keyword[j] = 'I';
		}
		int temp = (int)(keyword[j]);
		if (temp > 73)
		{
			if (matrix[temp - 66] == 25)
			{
				matrix[temp - 66] = k;
				matrix2[k] = temp - 66;
				k++;
			}
		}
		else
		{
			if (matrix[temp - 65] == 25)
			{
				matrix[temp - 65] = k;
				matrix2[k] = temp - 65;
				k++;
			}
		}	
    }
	for (int j= 0;j < 25;j++)
	{
		if (matrix[j] == 25)
		{
			matrix[j] = k;
			matrix2[k] = j;
			k++;
		}
	}
	int i = 0;
	string result = "";
	while (1)
	{
		string x = "  ";
		int j = 0;
		while (i != text.length() && j!=2)
		{
			if (text[i] == 'J')
			{
				text[i] = 'I';
			}
			x[j]= text[i];
			j++;
			i++;
		}
		if (j == 2)
		{
			if (x[0] == x[1] && x[0]=='X')
			{
				x[1] = 'Q';
				i--;
			}
			
			else if (x[0] == x[1])
			{
				x[1] = 'X';
				i--;
			}
		}
	else if (j < 2)
		{
				
			if (x[0]=='X')
			   {
					x[1]='Q';
		       }
			else
			   {
				x[1] = 'X';
			   }
		}
		int index1 = (int)x[0] - 65;
		int index2 = (int)x[1] - 65;
		index1 = (index1 > 8) ? index1 - 1 : index1;
		index2 = (index2 > 8) ? index2 - 1 : index2;
		index1 = matrix[index1];
		index2 = matrix[index2];
		if (index1 > index2 && (index1-(index1 %5))<=index2)
		{
			index1 = ((index1 + 1) % 5 == 0) ? (index1 - 4) : index1 + 1;
			index2 = ((index2 + 1) % 5 == 0) ? (index2 - 4) : index2 + 1;
		}
		else if(index2 > index1 && (index2 - (index2 % 5))<=index1)
		{
			index1 = ((index1+1) % 5 == 0) ? (index1-4)   :index1 + 1;
			index2 = ((index2+1) % 5 == 0) ? (index2-4)   : index2 + 1;
		}
		else if (index2%5 == index1%5)
		{
			index1 = ((index1 + 5) >24) ? (index1+5)%5 : index1 + 5;
			index2 = ((index2 + 5) >24) ? (index2+5)%5 : index2 + 5;
		}
		else
		{
			int temp1 = (index2 % 5) + index1 - (index1 % 5);
			index2 = (index1 % 5) + index2 - (index2 % 5);
			index1 = temp1;
		}
		result = (matrix2[index1] > 8)?(result + (char)(matrix2[index1] + 66)): result + (char)(matrix2[index1] + 65);
		result = (matrix2[index2] > 8)?result + (char)(matrix2[index2] + 66): result + (char)(matrix2[index2] + 65);
		if (i == text.length())
		{
			break;
		}
	}
	std::cout << result;
}
