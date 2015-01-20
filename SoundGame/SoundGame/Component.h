#pragma once

class Component
{
public:
	Component();
	virtual ~Component();

	virtual bool	Initialize();
	virtual void	Shutdown();

	virtual void	Reset();
};