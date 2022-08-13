
#include <bits/stdc++.h>
#include <sstream>
using namespace std;


void split(const string &s, char delimiter,
					vector<string> &words)
{
	string token;
	stringstream tokenStream(s);

	while (getline(tokenStream, token, delimiter))
		words.push_back(token);
}


int distance(string s, string w1, string w2)
{
	if (w1 == w2)
		return 0;

	
	vector<string> words;
	split(s, ' ', words);

	
	int min_dist = words.size() + 1;

	
	for (int index = 0; index < words.size(); index++)
	{
		if (words[index] == w1)
		{
			for (int search = 0;
					search < words.size(); search++)
			{
				if (words[search] == w2)
				{
					
					int curr = abs(index - search) - 1;

					
					if (curr < min_dist)
						min_dist = curr;
				}
			}
		}
	}


	return min_dist;
}


int main(int argc, char const *argv[])
{
	string s = "geeks for geeks contribute practice";
	string w1 = "geeks";
	string w2 = "practice";
	cout << distance(s, w1, w2) << endl;
	return 0;
}

