#pragma once

#include <string>
#include <vector>

class GMOParser {
public:
	explicit GMOParser(const std::string& filePath);

	bool isValidGMO() const;
	void readHeader(); //Reads and prints basic header info
	void parse(); //Stub for parse method

private:
	std::string filePath;
	std::vector<char> fileData;

	void loadFile();
};
