#pragma once

#include <vector>

#include <SFML/System.hpp>

#include "System.h"

struct MusicHandler
{
	int			Handler;
	sf::String	Filename;
};

class AudioSystem : public System
{
public:
	AudioSystem();
	virtual ~AudioSystem();

	virtual bool Initialize() override;
	virtual void Shutdown() override;
	virtual bool Update(float dt) override;

private:
	std::vector<MusicHandler>	m_handlers;

};