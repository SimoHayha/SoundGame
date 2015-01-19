#include <ShlObj.h>

#include <iostream>
#include <string>
#include <sstream>

#include <dirent.h>

#ifdef WIN32
#include <sys/types.h>
#endif

#include "FileSystem.h"

FileSystem::FileSystem()
{
}

FileSystem::~FileSystem()
{
}

bool FileSystem::Initialize()
{
	m_currentPath = GetAudioDirectory();

	DIR*	dir = opendir(m_currentPath.toAnsiString().c_str());
	if (dir)
	{
		struct dirent*	pDir = nullptr;
		while ((pDir = readdir(dir)) != nullptr)
		{
			std::string				filename = pDir->d_name;
			std::string::size_type	nameSepPos = filename.find_last_of(".");
			if (nameSepPos != std::string::npos)
			{
				std::string	extension = filename.substr(nameSepPos, filename.length());

				for (auto& it : m_extensions)
				{
					if (extension == it)
						std::cout << filename << std::endl;
				}
			}

			//std::wcout << filename << std::endl;
		}
		closedir(dir);
	}

	return true;
}

void FileSystem::Shutdown()
{
}

sf::String FileSystem::GetAudioDirectory()
{
	sf::String	path = "";

#ifdef WIN32
	wchar_t*	localMusicData = nullptr;

	if (FAILED(SHGetKnownFolderPath(FOLDERID_Music, 0, NULL, &localMusicData)))
		return ".";

	std::wstringstream	ss;
	ss << localMusicData;

	CoTaskMemFree(static_cast<void*>(localMusicData));

	path = sf::String(ss.str());
#else
	path = "";
#endif

	return path;
}

void FileSystem::AddExtension(sf::String extension)
{
	m_extensions.push_back(extension);
}
