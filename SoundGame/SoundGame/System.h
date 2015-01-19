#pragma once

#include "GameManager.h"

class System
{
public:
	System();
	virtual ~System();

	virtual bool	Initialize();
	virtual bool	Update(float dt);
	virtual void	Shutdown();
};