

#include <bits/stdc++.h>
using namespace std;


void findCombinations(vector<char> keypad[],
					int input[], string res, int index, int n)
{
	
	if (index == n) {
		cout << res << " ";
		return;
	}

	int digit = input[index];

	
	int len = keypad[digit].size();

	
	for (int i = 0; i < len; i++) {
		findCombinations(keypad, input, res + keypad[digit][i], index + 1, n);
	}
}


int main()
{
	
	vector<char> keypad[] =
	{
		{}, {},	 
		{ 'a', 'b', 'c' },
		{ 'd', 'e', 'f' },
		{ 'g', 'h', 'i' },
		{ 'j', 'k', 'l' },
		{ 'm', 'n', 'o' },
		{ 'p', 'q', 'r', 's'},
		{ 't', 'u', 'v' },
		{ 'w', 'x', 'y', 'z'}
	};

	
	int input[] = { 2, 3, 4 };
	
	
	int n = sizeof(input)/sizeof(input[0]);

	
	findCombinations(keypad, input, string(""), 0, n );

	return 0;
}
