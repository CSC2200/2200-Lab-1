#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "Text.h"

int main()
{
	string line;
	string Token;
	int count = 0;

	ifstream inputfile("progsamp.dat");
	if (inputfile.is_open())
	{
		while (getline(inputfile, line))
		{
			for (int i = 0; i < line.length(); i++)
			{
				if (line[i] != ' ')
				{
					int j = 0;
					int k = i;
					while (line[i] != ' ' && i < line.length())
					{
						j++;
						i++;
					}
					
					Token.assign(line, k, j);
					count++;
					cout << count << " : " << Token << endl;
				}
			}
		}
		inputfile.close();
	}
	else
		cout << "Error: Unable to open file.";

	return 0;
}
