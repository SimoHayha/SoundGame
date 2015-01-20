#pragma once

#include <vector>
#include <memory>

#include <SFML/Graphics.hpp>

#include "RenderComponent.h"
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

private:
	std::auto_ptr<sf::RenderWindow>	m_window;
	std::vector<RenderComponent>	m_renderComponents;
};