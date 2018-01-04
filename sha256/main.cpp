#include <iostream>
#include "sha256.h"
#include <vector>

using std::string;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
	std::vector<string> input = {"grape","abc","","abcdbcdecdefdefgefghfghighijhijkijkljklmklmnlmnomnopnopq",
		"abcdefghbcdefghicdefghijdefghijkefghijklfghijklmghijklmnhijklmnoijklmnopjklmnopqklmnopqrlmnopqrsmnopqrstnopqrstu",
	};

	string output;
	
	for (auto it = input.begin(); it<input.end(); it++){
		output=sha256(*it);

	cout << "sha256('"<< *it << "'):" << output << endl;

	}

	return 0;
}
