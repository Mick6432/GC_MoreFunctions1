//
//

#include "Functions.h"
#include <iostream>
#include <string>

using namespace std;

void printMultiple(string s, int times)
{
	for (int i = 0; i < times; i++)
	{
		cout << s << endl;
	}
		
}

void replace_string(string& s, string replace_word, string with_word)
{
	int i = 0;
	size_t found = s.rfind(replace_word);

		if (found != std::string::npos)
			s.replace(found, replace_word.length(), with_word);
}