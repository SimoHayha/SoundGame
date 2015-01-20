#include <cassert>

#include "GraphicsSystem.h"

GraphicsSystem::GraphicsSystem()
{

}

GraphicsSystem::~GraphicsSystem()
{

}

bool GraphicsSystem::Initialize()
{
	//m_window.reset(new(std::nothrow) sf::RenderWindow(sf::VideoMode(200, 200), "SoundGame"));
	//if (!m_window.get())
	//	return false;

	//try
	//{
	//	m_sprites.resize(1024);
	//}
	//catch (std::bad_alloc&)
	//{
	//	return false;
	//}

	//m_firstSpriteAvailable = &m_sprites[0];
	//for (int i = 0; i < m_sprites.size() - 1; ++i)
	//	m_sprites[i].SetNext(&m_sprites[i + 1]);
	//m_sprites[m_sprites.size() - 1].SetNext(nullptr);

	//return true;

	try
	{
		m_renderComponents.resize(1024);
	}
	catch (std::bad_alloc&)
	{
		return false;
	}

	return true;
}

void GraphicsSystem::Shutdown()
{
	//m_sprites.clear();
	//m_firstSpriteAvailable = nullptr;
	//m_window.reset(nullptr);
}

bool GraphicsSystem::Update(float dt)
{
	return true;
}

bool GraphicsSystem::HandleInput()
{
	sf::Event	event;
	while (m_window->pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			return false;
	}

	return true;
}

void GraphicsSystem::Render()
{
	m_window->clear();
	m_window->display();
}
