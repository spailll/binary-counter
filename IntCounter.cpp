#include <iostream>
#include <bitset>
#include <unistd.h>

int main(int argc, char** argv){
	std::cout << "Beginning counter from 0-15." << std::endl;
	std::cout << "---------------------------" << std::endl;
	
	for (int i = 0; i < 16; i++) {
		sleep(1);
		std::bitset<4> nibble(i);
		std::cout << i << ": ";
		for (int j = 3; j >= 0; j--) {
			std::cout << nibble[j];
		}
		std::cout << std::endl;
	}

	std::cout << "Done!" << std::endl;
	return 0;
}
