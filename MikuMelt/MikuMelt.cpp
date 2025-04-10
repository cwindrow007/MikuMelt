/*
* Miku Melt - Project DIVA file Extractor and Convertor
* -------------------------------------------------------
* Author: **NOT PROVIDED**
* 
* ---------------------------------------------------------------------------------------------------
* DISCLAIMER
* ---------------------------------------------------------------------------------------------------
* This tool is an official, fan-made utility intendednfor solely
* educational and experimental purposes, such as extracting anc converting
* models from Project DIVA games and for use in MikuMikuDance(MMD).
* 
* It is STRICTLY FORBIDDEN to:
* - Redistribute or upload original game files or assets
* - Use this tool for any commercial purposes
* - Use this tool to create, promote, or distribute pronographic, sexualized,
*   or otherwise inappropriate content involving Vocaloid chopyrighted characters
*
* MikuMikuDance (MMD) is free software created by HiguchiM in Japan.
* Hatsune Miku and the Project DIVA series are intellectual property of
* Crypton Future Media and SEGA Japan. This tool is not affiliated with or
* endorsed by either company. 
* 
* 
* 
* Please Respect the original creator. Use ar your own risk. 
* 
*/


#include <iostream>
#include <fstream>
#include <string>

//Entry Point for Ripper

int main(int argc, char* argv[]) {
	std::cout << "Welcome to Miku Melt Model Rippper (Consult Project README for more information)" << std::endl;

	if (argc < 2) {
		std::cout << "Usage MikuMelt <path_to_file.gmo>" << std::endl;
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