#include <string>

std::string removeVowels(const std::string input)
{
	std::string returnString = "";

	for (int i = 0; i < input.length(); i++)
	{
		char c = input[i];

		switch (c)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':

		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			break;

		default:
			returnString += c;
			break;
		}
	}

	return returnString;
}