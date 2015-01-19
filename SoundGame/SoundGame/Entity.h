#pragma once

class GameManager;

class Entity
{
public:
	Entity();
	virtual ~Entity();

	bool	Tick(GameManager* gameManager);
};