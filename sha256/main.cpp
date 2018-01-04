#include <iostream>
#include "sha256.h"
#include <vector>

using std::string;
using std::cout;
using std::endl;



int main(int argc, char *argv[])
{
	std::vector<std::string> input = {"",
		"a",
		"abc",
		"message digest",
		"abcdefghijklmnopqrstuvwxyz",
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789",
		"12345678901234567890123456789012345678901234567890123456789012345678901234567890",
		"The quick brown fox jumps over the lazy dog"
	};

	string output;
	
	for (auto it = input.begin(); it<input.end(); it++){
		output=sha256(*it);

	cout << "sha256('"<< *it << "'):" << output << endl;

	}

	return 0;
}
