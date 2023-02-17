				//Int (0-15) to 4-bit binary	Ben Sailor
#include <iostream>		//iostream included for input and output	
#include <bitset>		//bitset included for binarization of integer
#include <unistd.h>		//unistd.h included for the sleep function

int main(int argc, char** argv){	//main method
	std::cout << "Beginning counter from 0-15." << std::endl; //basic output text for formatting
	std::cout << "---------------------------" << std::endl;
	
	for (int i = 0; i < 16; i++) {			//Begin Outer Loop to iterate through counter
		sleep(1);				//sleep function for time delay of 1 second per iteration
		std::bitset<4> nibble(i);		//binarization function, turns integer i into a nibble (4 bits of binary)
		std::cout << i << ": ";			//formatting for output, adds number next to binary representation
		for (int j = 3; j >= 0; j--) {		//Begin Inner Loop for iterating through the bits of the nibble
			std::cout << nibble[j];		//outputting the bit
		}					//End of Inner Loop
		std::cout << std::endl;			//ending the line
	}						//End of Outer Loop

	std::cout << "Done!" << std::endl;		//outputting that the program has completed	
	return 0;					//returning 0 for the main method
}							//End of main method 
