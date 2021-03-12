// fo-lib.cpp : Определяет функции для статической библиотеки.
//

#include <iostream>
#include "fo-lib.h"

namespace operSet
{
	FILE* withFile::openFile(const char* FileName)
	{
		errno_t result;
		FILE* fileHandler;

		result = fopen_s(&fileHandler, FileName, "r");
		if (result != 0) {
			return fileHandler;
		}
		else {
			return 0;
		}

	}

	int withFile::closeFile(FILE* fileHandler)
	{
		int	result = fclose(fileHandler);
		if (result) {
			return result;
		}
		else {
			return 0;
		}
	}

	int withFile::readNumber(int* Number, FILE* fileHandler)
	{
		int readed = fscanf_s(fileHandler,"%d",Number);
		if (readed > 0){
			return 1;
		}
		else {
			return 0;
		}
	}

	int withFile::readStudentData(FILE* fileHandler)
	{
		wchar_t studentData[128];
		int readed = fscanf_s(fileHandler, "%ls", &studentData, 127);
		if (readed > 0) {
			std::cout << "Was readed " << studentData << std::endl;
			return 1;
		}
		else {
			return 0;
		}
	}
	
	withFile::withFile(const char* FileName)
	{
		this->openFile(FileName);
	}

	withFile::~withFile()
	{
	}
}
