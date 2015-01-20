#pragma once

class Node;

class Scene
{
public:
	Scene();
	virtual ~Scene();

	bool	Initialize();
	void	Shutdown();

protected:
	Node*	m_root;
};