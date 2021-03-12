#pragma once

#define WIN32_LEAN_AND_MEAN             // Исключите редко используемые компоненты из заголовков Windows

#include <stdio.h>

namespace operSet
{
	class withFile
	{
	public:

		withFile(const char* FileName);
		~withFile();

		static FILE* openFile(const char* FileName);
		static int closeFile(FILE* fileHandler);
	};
}