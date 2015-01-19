#pragma once

#include <vector>
#include <memory>

#include <SFML/Graphics.hpp>

#include "Sprite.h"
#include "System.h"

class GraphicsSystem : public System
{
public:
	GraphicsSystem();
	virtual ~GraphicsSystem();

	virtual bool	Initialize() override;
	virtual void	Shutdown() override;
	virtual bool	Update(float dt) override;
	bool			HandleInput();
	void			Render();

	Sprite*	CreateSprite();
	void	ReleaseSprite(Sprite* sprite);

private:
	std::auto_ptr<sf::RenderWindow>	m_window;
	std::vector<Sprite>				m_sprites;
};