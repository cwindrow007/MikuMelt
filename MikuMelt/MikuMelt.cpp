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


#include "FARCExtractor.h"
#include <iostream>
#include <fstream>
#include <string>

//Entry Point for Ripper

int main(int argc, char* argv[]) {
	std::cout << "Welcome to Miku Melt Model Rippper (Consult Project README for more information)" << std::endl;

    if (argc < 2) {
        std::cout << "Usage: MikuMelt <file.farc>" << std::endl;
        return 1;
    }

    std::string path = argv[1];
    FARCExtractor extractor(path);

    if (extractor.isValidFARC()) {
        extractor.extractALL("output/");  // Extracts all embedded files into a folder
    }
    else {
        std::cerr << "Invalid FARC file!" << std::endl;
    }

    return 0;
}