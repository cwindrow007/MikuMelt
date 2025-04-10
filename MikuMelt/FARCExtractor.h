#pragma once

#include <string>
#include <vector>

class FARCExtractor {
public:
	explicit FARCExtractor(const std::string& fildPath);

	bool extractALL(const std::string& outputDir);
	bool isValidFARC() const;

private:
	std::string filePath;
	std::vector<char> fileData;

	void loadFile();
	void parseFARC(const std::string& outputDir);
};