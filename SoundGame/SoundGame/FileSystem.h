#pragma once

#include "System.h"

#include <SFML/System.hpp>

#include <string>
#include <vector>

class FileSystem : public System
{
public:
	FileSystem();
	virtual ~FileSystem();

	virtual bool Initialize() override;
	virtual void Shutdown() override;

	void	AddExtension(sf::String extension);

private:
	sf::String				m_currentPath;
	std::vector<sf::String>	m_extensions;

	sf::String GetAudioDirectory();

};