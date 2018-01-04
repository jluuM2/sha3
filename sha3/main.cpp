#include "sha3.h"
#include <vector>
#include <string>
#include <iostream>



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

	std::string output;

	for (auto it = input.begin(); it<input.end(); it++){
		output=sha3_256(*it);

		std::cout << "sha3_256('"<< *it << "'):" << output << std::endl;

	}

	return 0;
}