#include<iostream>
#include<algorithm>
#include<vector>
using std::cin;
using std::vector;
using std::pair;
using std::cout;

int main()
{
	int number;
	cin >> number;
	int i = 0;
	vector<pair<int, int>> input(number);
	vector<int> index(number,-1);
	for (int i = 0;i < number;i++)
	{
		int temp;
		cin >> temp;
		input[i].first = temp-1;
		input[i].second = i;
		index[input[i].first] = 1;
	}
	int flag = 0;
	for (int i = 0;i < number;i++)
	{
		if (index[i] == -1)
		{
			cout << "IMPOSSIBLE";
			return 0;
		}
	}
	sort(input.begin(), input.end());
	for (int i = 0;i < number;i++)
	{
		cout << input[i].second + 1 << " ";
	}

}
