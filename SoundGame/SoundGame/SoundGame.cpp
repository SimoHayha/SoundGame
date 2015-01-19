#include <SFML/Graphics.hpp>

#include "GameManager.h"

int main(int ac, char* av[])
{
	GameManager gameManager;

	if (!gameManager.Initialize(ac, av))
		return -1;

	while (gameManager.IsAlive())
	{
		if (!gameManager.HandleInput())
			break;
		if (!gameManager.Update())
			break;
		if (!gameManager.Render())
			break;
	}

	gameManager.Shutdown();

	return 0;
}

