// MikuMelt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

//Entry Point for Ripper

int main(int argc, char* argv[]) {
	std::cout << "Welcome to Miku Melt Model Rippper (Consult Project README for more information)" << std::endl;

	if (argc < 2) {
		std::cout << "UsageL MikuMelt <path_to_file.gmo>" << std::endl;
		return 1;
	}

	std::string filePath = argv[1];
	std::ifstream file(filePath, std::ios::binary);

	if (!file) {
		std::cerr << "Failed to open file: " << filePath << std::endl;
		return 1;
	}

	//Reads first 4 bytes (This is example code)
	char header[4];
	file.read(header, 4);

	std::cout << "First 4 bytes (header): ";
	for (int i = 0; i < 4; i++)
		std::cout << std::hex << ((unsigned int)(unsigned char)header[i]) << " ";
	std::cout << std::dec << std::endl;

	file.close();
	return 0;
}