#include "FileReader.h"

namespace filereader
{
	std::string getFileString(std::string fileName)
		{
			std::ifstream file (fileName);
			std::string text = "";
			if (file.is_open())
			{
				std::string line;
				while (std::getline(file, line) )
				{
					text.append(line);
				}
				file.close();
			}
			return text;
		}
};