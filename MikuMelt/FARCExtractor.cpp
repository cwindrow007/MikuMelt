//FARCExtractor.cpp

#include "FARCExtractor.h"
#include <fstream>
#include <iostream>
#include <filesystem>

namespace fs = std::filesystem;

FARCExtractor::FARCExtractor(const std::string& filePath) : filePath(filePath) {
	loadFile();
}

void FARCExtractor::loadFile() {
	std::ifstream file(filePath, std::ios::binary);
	if (!file) {
		std::cerr << "[ERROR] Cannot open file: " << filePath << std::endl;
		return;
	}

	file.seekg(0, std::ios::end);
	size_t size = file.tellg();
	file.seekg(0, std::ios::beg);

	fileData.resize(size);
	file.read(fileData.data(), size);

	std::cout << "[INFO] Loaded " << size << " bytes from " << filePath << std::endl;

}


bool FARCExtractor::isValidFARC() const {
	return fileData.size() >= 4 &&
		fileData[0] == 'F' &&
		fileData[1] == 'A' &&
		fileData[2] == 'R' &&
		fileData[3] == 'C';
}

bool FARCExtractor::extractALL(const std::string& outputDir) {
	if (!isValidFARC()) {
		std::cerr << "[ERROR] Not a valid FARC file." << std::endl;
		return false;
	}

	// TODO: Actually parse and extract embedded files.
	std::cout << "[TODO] Extraction logic not yet implemented." << std::endl;
	return false;
}


