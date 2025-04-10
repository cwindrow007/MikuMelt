//GMOParser.cpp

#include "GMOParser.h"
#include <fstream>
#include <iostream>

GMOParser::GMOParser(const std::string& filepath) : filePath(filePath) {
	loadFile();
}

void GMOParser::loadFile() {
	std::ifstream file(filePath, std::ios::binary);

	if (!file) {
		std::cerr << "[ERROR] Cannot open file: " << filePath << std::endl;
		return;
	}
	file.seekg(0, std::ios::end);
	std::streamsize size = file.tellg();
	file.seekg(0, std::ios::beg);

	fileData.resize(size);
	if (file.read(fileData.data(), size)) {
		std::cout << "[INFO] Loaded " << size << " bytes from " << filePath << std::endl;
	}
	else {
		std::cerr << "[ERROR] Failed to read file." << std::endl;
	}
}