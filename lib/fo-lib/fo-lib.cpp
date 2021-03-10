// fo-lib.cpp : Определяет функции для статической библиотеки.
//

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
	
	withFile::withFile(const char* FileName)
	{
		this->openFile(FileName);
	}

	withFile::~withFile()
	{
	}
}
