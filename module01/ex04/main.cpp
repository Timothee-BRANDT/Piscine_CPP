#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		string infile = argv[1];
		string string1 = argv[2];
		string string2 = argv[3];
		ifstream stream (infile);	
		if (stream.is_open()) {
			ofstream outfile ("output.txt");
			string buffer;
			while (getline(stream, buffer))
			{
				if (buffer[0])
				{
					if (buffer.find(string1))
					{
						size_t pos = buffer.find(string1);
						size_t length = string1.length();
						string result = buffer.substr(0, pos) + string2 + buffer.substr(pos + length);
						buffer = result;
					}

				}
				outfile << buffer << endl;
			}
			stream.close();
			outfile.close();
		}
		else
			cout << "File can't be open" << endl;
		return (0);
	}
	else
		cout << "Bad number of arguments -> ./a.out filename string1 string2";
}
